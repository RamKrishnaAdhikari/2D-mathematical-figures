#include "point.h"

point::point() {}
point::point(int x, int y):x(x),y(y){}
int point:: getx()const {
    return x;
}
int point ::gety()const {
    return y;
}
