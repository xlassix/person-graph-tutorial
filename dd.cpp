#include<graphics.h>
#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
    // Declarations
    int gd=DETECT,gm;
    double x1,y1,y2,x2,dy,dx;
    double steps,yinc,xinc;


    // Accept input from users
    cout << "Type x1: "; 
    cin >> x1; 

    cout << "Type y1: "; 
    cin >> y1; 

    cout << "Type x2: "; 
    cin >> x2; 

    cout << "Type y2: "; 
    cin >> y2; 

    dy=(y2-y1);
    dx=(x2-x1);

    //step calculation
    steps=abs(std::max(dx,dy));

    //increments calculations
    yinc=dy/steps;
    xinc=dx/steps;

    initgraph(&gd,&gm,NULL);


    for (int i=0;i<steps;i++){
        putpixel(x1,y1,15);
        x1=x1+xinc;
        y1=y1+yinc;
    }
    getch();
    closegraph();
    return 0;
}