#include <GL/glut.h>
#include <math.h>
#include <iostream>

#include "public.h"

#include "star.h"
#include "planet.h"
#include "lightplanet.h"
#include "solarsystem.h"

using namespace std;

SolarSystem solarsystem;

void onDisplay(void) {
    solarsystem.onDisplay();
};

void onUpdate(void) {
    solarsystem.onUpdate();
};

void onKeyboard(unsigned char key, int x, int y) {
    solarsystem.onKeyboard(key, x, y);
};

int main(int argc, char * argv[])
{
    glutInit(&argc, argv);
    //使用RGBA模式和双缓冲窗口
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("SolarSystem");


    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);

    glutMainLoop();
    return 0;
}
