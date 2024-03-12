#include "application.h"
#include<iostream>
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
using namespace std;

application::application() {}
void application::userdialog(){
    cout<<"1.Objekt einfügen"<<endl;
    cout<<"2.Objekt entfernen"<<endl;
   cout<<"3.Objekt anzeigen"<<endl;
    cout<<"4.Programm beenden"<<endl;
   int choice ;
    do{
       cout<<"Geben Sie choice ein"<<endl;
        cin>>choice;
       switch(choice){
        case 1 :{
           cout<<"Welches obj soll erzeugt werden[0-kreis|1-rechteck|2-triangle]"<<endl;
            int n;
           cin>>n;
            if(n==0){
               cout<<"refpunkt eingeben"<<endl;
                int x,y;
               cin>>x>>y;
              point  refpunkt(x,y);
               cout<<"Radius eingeben?"<<endl;
              int radius;
               cin>>radius;
               circle* c= new circle(refpunkt,radius);
                drawing.insert(c);
              cout<<"circle wurde in 2Dszene eingefügt"<<endl;




            }
            else if(n==1){
                cout<<"refpunkt eingeben "<<endl;
                int x,y;
                cin>>x>>y;
                point refpunkt(x,y);
                cout<<"WIdth und height eingeben"<<endl;
                int width;
                int height;
               cin>>width;
               cin>>height;
               rectangle* r =new rectangle(refpunkt,width,height);
               drawing.insert(r);
               cout<<"new rectangle wurde in 2D eingefügt"<<endl;





            }
            else if(n==2){
                cout<<"Geben Sie drei punkte"<<endl;
                int x1,x2,x3,x4,x5,x6;
                cin>>x1>>x2>>x3>>x4>>x5>>x6;
                point A(x1,x2);
                point B(x3,x4);
                point C(x5,x6);
                triangle * t = new triangle(A,B,C);
                drawing.insert(t);
                cout<<"New triangle wurde in 2D eingefügt"<<endl;

            }
            else{

                cout<<"ungültige n"<<endl;

           }
            break;

        }
        case 2 :{
            cout<<"Geben Sie index you want ot remove "<<endl;
            int index;
            cin>>index;
            Graphobj* g = drawing.at(index);
            if(g!= nullptr){
            drawing.remove(g);
                cout<<"Obj wurde erfolgreich gelöscht"<<endl;
            }
            else{
                cout<<"Keine solche Objekte gefunden"<<endl;
            }
            break;



            }
        case 3 :
                drawing.display();
            break;
        case 0 :
            cout<<"Programm wird beendet"<<endl;
            break;
        default :
            cout<<"Ungültige Eingabe"<<endl;
}
    }
    while(choice!=0);
}
