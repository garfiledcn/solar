#include <GL/glut.h>
#include <math.h>
#include <iostream>

#include "star.h"

#include "public.h"

void Star::update(long timeSpan) {
    alpha += timeSpan*speed;
    alphaSelf += selfSpeed;
}

void Star::drawStar() {
    glEnable(GL_LINE_SMOOTH);
    glEnable(GL_BLEND);
    int n = 1440;

    glPushMatrix();
    {
        if (parentStar != 0 && parentStar->distance > 0) {
            //图像沿Z轴旋转alpha
            glRotatef(parentStar->alpha, 0, 0, 1);
            //x轴平移distance
            glTranslatef(parentStar->distance, 0.0, 0.0);
        }
        //绘制运行轨道
        glBegin(GL_LINES);
        for (int i = 0; i < n; ++i)
            glVertex2f(distance*cos(2 * PI*i / n), distance*sin(2 * PI*i / n));
        glEnd();
        //绕Z轴旋转alpha
        glRotatef(alpha, 0, 0, 1);
        glTranslatef(distance, 0.0, 0.0);

        //自转
        glRotatef(alphaSelf, 0, 0, 1);
        //上色
        glColor3f(rgbaColor[0], rgbaColor[1], rgbaColor[2]);
        glutSolidSphere(radius, 40, 32);
    }
    glPopMatrix();
}

Star::Star(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfspeed,
    Star* parent) {
    this->radius = radius;
    this->distance = distance;
    this->selfSpeed = selfspeed;
    this->alphaSelf = this->alpha = 0;
    for (int i = 0; i < 4; i++)
        this->rgbaColor[i] = 1.0f;
    this->parentStar = parent;

    if (speed > 0)
        this->speed = 360.0f / speed;
    else
        this->speed = 0.0f;
}
