#include <iostream>
#include<windows.h>
#include<math.h>
#include<conio.h>
using namespace std;
void sleep(int m){
for(int j=0;j<m*23000;j++){
}
}
void gotoRowCol(int rpos,int cpos){
int xpos=cpos,ypos=rpos;
COORD scrn;
HANDLE hOuput=GetStdHandle(STD_OUTPUT_HANDLE);
scrn.X=cpos;
scrn.Y=rpos;
SetConsoleCursorPosition(hOuput,scrn);
}


void left_to_right(int x ,int y,int x0,int y0){
for(int i=x0;i<y;i++) {
        gotoRowCol(x0,i);
    cout<<"*";
    sleep(1500);
}}
void right_to_left(int x ,int y,int x0,int y0){
for(int i=y;i>=x0;i--) {
        gotoRowCol(x,i);
    cout<<"*";
    sleep(1500);
}
}
 void top_to_bottom(int x ,int y,int x0,int y0){
for(int i=x0;i<x;i++) {
        gotoRowCol(i,y);
    cout<<"*";
    sleep(1500);
  }
}

void bottom_to_top(int x ,int y,int x0,int y0){
for(int i=x;i>=x0;i--) {
        gotoRowCol(i,y0);
    cout<<"*";
    sleep(1500);
  }
}
// for removing
/*
void rem_lef_to_right(int x ,int y,int x0,int y0){
    for(int i=x;i>0;i--) {
        gotoRowCol(i,y);
    cout<<" ";
    sleep(1500);
}}
void rem_top_to_bottom(int x ,int y,int x0,int y0){
    for(int i=y;i>0;i--) {
        gotoRowCol(i,y);
    cout<<" ";
    sleep(1500);
  }
}
void rem_right_to_left(int x ,int y,int x0,int y0){
for(int i=y;i>=0;i--) {
        gotoRowCol(x,i);
    cout<<" ";
    sleep(1500);
}
}
void rem_bottom_to_top(int x ,int y,int x0,int y0){
for(int i=x;i>=0;i--) {
        gotoRowCol(i,y);
    cout<<" ";
    sleep(1500);
  }
}  */
int main()

{ int x0=0,y0=0,x=10,y=25;
    // function(x,y)
    while(x!=x/2 && y!=y/2 && x0!=11 && y0!= 11){
    left_to_right(x,y,x0,y0);
 top_to_bottom(x,y,x0,y0);
 right_to_left(x,y,x0,y0);
  bottom_to_top(x,y,x0,y0);
x--;y--;
x0++;y0++;
    }
    /*
    x=x/2;
    y=y/2;
    x0=x/2,y0=y/2;


while (x!=0 && y!=0 && x0!=0 && y0!=0){


rem_lef_to_right(x,y,x0,y0);
rem_top_to_bottom(x,y,x0,y0);
rem_right_to_left(x,y,x0,y0);
rem_bottom_to_top(x,y,x0,y0);
x--;y--;
x0--;y0--;
}
*/
  getch();
    return 0;
}
