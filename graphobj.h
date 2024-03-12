#ifndef GRAPHOBJ_H
#define GRAPHOBJ_H
#include"point.h"

class Graphobj
{
protected:
    point refpnt;
public:
    Graphobj(const point& p);
    virtual ~Graphobj();
    void setrefpnt(const point& p);
        point getrefpoint();
    void move(const point& t);
        float distance(Graphobj* g);
   virtual void display()=0;
};

#endif // GRAPHOBJ_H


