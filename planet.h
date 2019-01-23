#ifndef __PLANET_H__
#define __PLANET_H__

class Star;

class Planet : public Star {
public:
    Planet(GLfloat radius, GLfloat distance, GLfloat speed,
        GLfloat selfspeed, Star *parent, GLfloat rgbColor[3]);
    void drawPlanet();
    virtual void draw() { drawPlanet(); drawStar(); }
};

#endif
