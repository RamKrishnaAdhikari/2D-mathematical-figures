#include "scene.h"

scene::scene() {}
scene::~scene(){
    for(const auto& o : objbag){
        delete o;
    }
}
void scene::insert(Graphobj* g){
    objbag.push_back(g);
}
Graphobj* scene::at(int x){
    if(x>=0 && x<objbag.size()){
        return objbag[x];
    }
    return nullptr;
}
void scene :: remove(Graphobj* g){
    for(int i =0;i<objbag.size();i++){
        if(objbag[i]==g){
        objbag.erase(objbag.begin()+i);
        }
    }
}

void scene :: display (){
    for(const auto& a : objbag){
        a->display();

    }
}

