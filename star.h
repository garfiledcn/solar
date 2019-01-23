#ifndef __STAR_H__
#define __STAR_H__

class Star {
public:
    GLfloat radius;
    GLfloat speed, selfSpeed;
    GLfloat distance;
    GLfloat rgbaColor[4];

    Star* parentStar;

    Star(GLfloat radius, GLfloat distance, GLfloat speed,
        GLfloat selfSpeed, Star *parent);

    void drawStar();
    virtual void draw() { drawStar(); }
    virtual void update(long timeSpan);
protected:
    float alphaSelf, alpha;
};

#endif
