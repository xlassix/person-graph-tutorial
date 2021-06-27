#include<graphics.h>
#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
    // Declarations
    int gd=DETECT,gm;
    int x1=0,y1=0,y2=0,x2=0,dy,dx,p;


    // Accept input from users
    while (x1<=0){
        
        cout << "Type x1(Kindly enter a number greater then 0): "; 
        cin >> x1; 
    }

    while (y1<=0){
        cout << "Type y1(Kindly enter a number greater then 0): "; 
        cin >> y1;
    } 

    while (x1>x2){
        cout << "Type x2(Kindly enter a number greater than x1): "; 
        cin >> x2; 
    }

    while (y1>y2){
        cout << "Type y2 (Kindly enter a number greater than y1): "; 
        cin >> y2; 
    }

    //3.  Calculate the constants Δx, Δy, 2Δy, and (2Δy -2Δx) 
    dy=(y2-y1);
    dx=(x2-x1);
    p0= (2*dy -2*dx)
    p = 2*dx -dy;
    initgraph(&gd,&gm,NULL);



    //4.
    while (x1<x2){
        putpixel(x1,y1,15);
        x1++;

        if(p<0){
            p = p + 2*dy;
        }else{
            p = p + 2*dy -2*dx;
            y1++;
        }
    }
    getch();
    closegraph();
    return 0;
}