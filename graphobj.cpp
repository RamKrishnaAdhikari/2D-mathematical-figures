#include "graphobj.h"
#include<cmath>


Graphobj::Graphobj(const point& p):refpnt(p){}
Graphobj::~Graphobj(){}
void Graphobj:: setrefpnt(const point& p ){
    refpnt= p;
   }
point Graphobj::getrefpoint(){
    return refpnt;
}
void Graphobj::move(const point& t){
    point newrefpnt;
    newrefpnt= point(refpnt.getx()+t.getx(),refpnt.gety()+t.gety());
    refpnt=newrefpnt;
}
float Graphobj:: distance(Graphobj* g){
    float distance;
    distance = sqrt((g->getrefpoint().getx()-refpnt.getx())^2+(g->getrefpoint().gety()-refpnt.gety())^2);
    return distance;
}
