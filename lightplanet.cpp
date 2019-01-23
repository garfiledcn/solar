#include <GL/glut.h>
#include <math.h>
#include <iostream>

#include "star.h"
#include "planet.h"
#include "lightplanet.h"


LightPlanet::LightPlanet(GLfloat Radius, GLfloat Distance, GLfloat Speed, GLfloat Selfspeed, Star * Parent, GLfloat rgbColor[]):
    Planet(radius,distance,speed,selfSpeed,Parent,rgbColor)
{}


void LightPlanet::drawLight() {
    GLfloat light_position[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat light_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat light_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);//零号光源位置
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);//各种光线反射到该材质上，经过多次反射后遗留的光线强度
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);//漫反射后的光照强度
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);//镜面反射后的光照强度

}
