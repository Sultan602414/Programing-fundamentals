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


void circle(int radius,char chr){
double Q=1;

for(int i=Q ;i<=360;i++){
double x ,y;
x=radius*cos(3.14*2*Q/360) + 30;
y=radius*sin(3.14*2*Q/360 )+ 30 ;
gotoRowCol(x,y);
cout<<chr;
Q++;
sleep(1000);
}
}



int main()

{
    double radius = 15;
char chr;
cout<<"ENTER THE CHARACTER: ";
cin>>chr;
circle(radius , chr);

getch();
    return 0;
}
