#include "triangle.h"
#include <iostream>

triangle::~triangle(){}
int triangle::summexcomponent(){
    return A.getx()+B.getx()+C.getx();
}
int triangle::summeycomponent(){
    return A.gety()+B.gety()+C.gety();
}
triangle::triangle(const point& A ,const point& B,const point& C):
    A(A),B(B),C(C),Graphobj(point(0,0)){
    refpnt = refpnt = point(summexcomponent() / 3, summeycomponent() / 3);

}


void triangle::display(){
    std::cout<<"Triangle mitmittelpunkt"<<" ("<<refpnt.getx()<<","<<refpnt.gety()<<")"<<std::endl;
}
