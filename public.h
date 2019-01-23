#ifndef __PUBLIC_H__
#define __PUBLIC_H__

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700
#define STARS_NUM 10
#define TIMEPAST 1
#define SELFROTATE 3
#define PI 3.1415926535
#define OFFSET 20
//公转半径
#define SUN_RADIUS 48.74
#define MER_RADIUS  7.32
#define VEN_RADIUS 18.15
#define EAR_RADIUS 19.13
#define MOO_RADIUS  6.15
#define MAR_RADIUS 10.19
#define JUP_RADIUS 42.90
#define SAT_RADIUS 36.16
#define URA_RADIUS 25.56
#define NEP_RADIUS 24.78

//距太阳的距离
#define MER_DIS   62.06
#define VEN_DIS  115.56
#define EAR_DIS  168.00
#define MOO_DIS   26.01
#define MAR_DIS  228.00
#define JUP_DIS  333.40
#define SAT_DIS  428.10
#define URA_DIS 848.00
#define NEP_DIS 949.10

//运动速度
#define MER_SPEED   870.0
#define VEN_SPEED  2250.0
#define EAR_SPEED  3650.0
#define MOO_SPEED   300.0
#define MAR_SPEED  6870.0
#define JUP_SPEED 12980.4
#define SAT_SPEED 32250.6
#define URA_SPEED 30660.4
#define NEP_SPEED 60140.8

#define SET_VALUE_3(name, value0, value1, value2) \
                   ((name)[0])=(value0), ((name)[1])=(value1), ((name)[2])=(value2)
#define REST 700
#define REST_Z (REST)
#define REST_Y (-REST)


enum STARS {
    Sun,      //太阳
    Mercury,  //水星
    Venus,    //金星
    Earth,      //地球
    Moon,     //月球
    Mars,     //火星
    Jupiter,  //土星
    Saturn,   //木星
    Uranus,   //天王星
    Neptune   //海王星
};

#endif
