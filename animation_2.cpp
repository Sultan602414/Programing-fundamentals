#include <iostream>
#include<windows.h>
#include<math.h>
#include<conio.h>
using namespace std;
void sleep(int m){
for(int j=0;j<m*1300;j++){
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

void first_char(int x,int y, char chr){



   for( int i= x ; i> x-x;i--){
    gotoRowCol(x-x,i);
    cout<<chr;
   }

   for( int i= x-x+1;i<x;i++){
    gotoRowCol(i,x-x);
    cout<<chr;
   }
for( int i= x-1 ; i> x-x;i--){
    gotoRowCol(x,i);
    cout<<chr;
   }
////////////
    for( int i= x-x+1;i<x;i++){
    gotoRowCol(x+i,y/2);
    cout<<chr;
   }
for( int i= x-1 ; i>= x-x;i--){
    gotoRowCol(x+x,i);
    cout<<chr;
   }
   }


   void second_char(int x ,int y ,char chr){
       gotoRowCol(15,30);
    for( int i= x+x+1;i>x-x;i--){
    gotoRowCol(i,x-x);
    cout<<chr;
   }
   for( int i= x-x ; i< x+x+1;i++){
    gotoRowCol(y+2,i);
    cout<<chr;
   }
    for( int i= x+x+1;i>x-x;i--){
    gotoRowCol(i,y);
    cout<<chr;
   }}
void third_char(int x ,int y ,char chr){
    gotoRowCol(15,30);
    for( int i= x+x+1;i>x-x;i--){
    gotoRowCol(i,x-x);
    cout<<chr;
   }
   for( int i= x-x ; i< x+x+1;i++){
    gotoRowCol(x+x+1,i);
    cout<<chr;
   }
}


int main()
{ int x =3,y=6;
char chr = '*';


    while (x!=16 && y!=26){

first_char(x,y,chr);
sleep(10000);
first_char(x,y,' ');
sleep(2000);
x=x+1;
y=y+2;

}

x =3,y=6;
 while (x!=15 && y!=28){

second_char(x,y,chr);
 sleep(10000);
 second_char(x,y,' ');
 sleep(2000);
 x=x+1;
y=y+2;
}
x =3,y=6;
 while (x!=15 && y!=28){

 third_char(x,y,chr);
 sleep(10000);
 third_char(x,y,' ');
 sleep(2000);
 x=x+1;
y=y+2;

}
getch();
 return 0;}



