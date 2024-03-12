#ifndef SCENE_H
#define SCENE_H
#include<vector>
#include"graphobj.h"

class scene
{
public:
    scene();
    ~scene();
    Graphobj* at(int x);
    void insert(Graphobj* g);
    void remove(Graphobj* g);
    void display();
private:
    std::vector<Graphobj*>objbag;
};

#endif // SCENE_H
