#ifndef CIRCLE_H
#define CIRCLE_H
#include"graphobj.h"

class circle: public Graphobj
{
public:
    circle(const point& refpnt,int radius);
    void display();
    ~circle();
private :
    int radius;
};

#endif // CIRCLE_H
