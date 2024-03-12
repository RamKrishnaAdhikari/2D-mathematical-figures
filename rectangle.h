#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"graphobj.h"

class rectangle:public Graphobj
{
public:

    rectangle(const point& p,int width,int height);
    ~rectangle();
    void display();
private:
    int width;
    int height;

};

#endif // RECTANGLE_H
