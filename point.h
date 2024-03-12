#ifndef POINT_H
#define POINT_H

class point
{
public:
    point();
    point(int x, int y);
    int getx()const;
    int gety()const ;
private :
    int x;
    int y;
};

#endif // POINT_H
