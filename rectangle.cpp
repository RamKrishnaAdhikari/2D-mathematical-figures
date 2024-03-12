#include "rectangle.h"
#include<iostream>

rectangle::rectangle(const point& p,int width,int height): Graphobj(p),width(width),height(height){}
rectangle::~rectangle(){}
void rectangle::display(){
    std::cout<<"Rechteck mit mittellpunkt"<<" ("<<refpnt.getx()<<","<<refpnt.gety()<<")"<<std::endl;
}
