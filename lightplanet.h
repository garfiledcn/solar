#ifndef __LIGHTPLANET_H__
#define __LIGHTPLANET_H__

class Planet;

class LightPlanet :public Planet {
public:
    LightPlanet(GLfloat Radius, GLfloat Distance, GLfloat Speed,
        GLfloat Selfspeed, Star *Parent,GLfloat rgbColor[]);
    void drawLight();
    virtual void draw() { drawLight(); drawPlanet(); drawStar(); }
};

#endif
