#ifndef TRIANGLE_H
#define TRIANGLE_H
#include"graphobj.h"

class triangle:public Graphobj
{
public:
    triangle();
    ~triangle();
    triangle(const point& A ,const point& B,const point& C);
    int summexcomponent();
    int summeycomponent();
    void display();

        private:
    point A;
    point B;
    point C;
};

#endif // TRIANGLE_H
