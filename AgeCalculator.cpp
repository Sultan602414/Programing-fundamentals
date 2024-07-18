#include <iostream>

using namespace std;

int main()
{
    int d,m,y,D,M,Y,fd,fm,fy;
    cout<<"ENTER YOUR DATE OF BIRTH as d/m/y: ";
    cin>>d>>m>>y;
    if(m==4 || m==6 || m==9 || m==11 && d<=30 && y>1990 && y<=2023){
    cout<<"ENTER YOR EXPECTED DEAtH DATE as D/M/Y: ";
    cin>>D>>M>>Y;
    }
    else if(m==1 || m==3 || m==5 || m==7 ||m==8 || m==10 || m==12 && d<=31 && y>1990 && y<=2023){
    cout<<"ENTER YOR EXPECTED DEAtH DATE as D/M/Y: ";
    cin>>D>>M>>Y;
    }
    else if(m==2 &&  y >1990 && y <=2023){
        if(y%4==0){
                if(d<=29){
    cout<<"ENTER YOR EXPECTED DEAtH DATE as D/M/Y: ";
    cin >>D>>M>>Y;
    }
    else if(d<=28){
    cout<<"ENTER YOR EXPECTED DEAtH DATE as D/M/Y: ";
    cin >>D>>M>>Y;
    }
    }
    }
     if(M==4 || M==6 ||M==9 ||M==11 && D<=30 && Y>2023 && Y<=2099){
           fy=Y-y;
           fm=M-m;
           fd=D-d;
           if(fm<=0){
                fm=fm+12;
            fy=fy-1;
           }
           if(fd<=0){
            fd=fd+30;
            fm=fm-1;
           }
           cout<<"YOUR TOTAL AGE IS: "<<fd<<"/"<<fm<<"/"<<fy;
    }
    else if(m==1 || m==3 || m==5 || m==7 ||m==8 || m==10 || m==12 && d<=31 && y>1990 && y<=2023){
           fy=Y-y;
           fm=M-m;
           fd=D-d;
           if(fm<=0){
                fm=fm+12;
            fy=fy-1;
           }
           if(fd<=0){
            fd=fd+31;
            fm=fm-1;
           }
           cout<<"YOUR TOTAL AGE IS: "<<fd<<"/"<<fm<<"/"<<fy;
    }
    else if(m==2 &&   y>1990 && y<=2023){
        if(y%4==0){
                if(d<=29){
                        fy=Y-y;
           fm=M-m;
           fd=D-d;
           if(fm<=0){
                fm=fm+12;
            fy=fy-1;
           }
           if(fd<=0){
            fd=fd+29;
            fm=fm-1;
           }
           cout<<"YOUR TOTAL AGE IS: "<<fd<<"/"<<fm<<"/"<<fy;
    }
    else if(d<=28){
        fy=Y-y;
           fm=M-m;
           fd=D-d;
           if(fm<=0){
                fm=fm+12;
            fy=fy-1;
           }
           if(fd<=0){
            fd=fd+29;
            fm=fm-1;
           }
    }
cout<<"YOUR TOTAL AGE IS: "<<fd<<"/"<<fm<<"/"<<fy;
}

    return 0;
}
}
