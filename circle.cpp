#include "circle.h"
#include<iostream>


circle::circle(const point& refpnt,int radius): Graphobj(refpnt),radius(radius){}
circle::~circle(){}
void circle :: display(){
    std:: cout<<"Kreis mit Mittelpunkt"<<" ("<<refpnt.getx()<<","<<refpnt.gety()<<")"<<std::endl;
}


