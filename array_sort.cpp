#include <iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
using namespace std;
void arrar_dec(int A[],int sze){
    srand(time(0));
for(int i=0;i<sze;i++ ){
    A[i]=rand()%500 ;

}
}
void print_array(int A[],int sze){
for(int i=0;i<sze;i++ ){

        cout<<A[i]<<" ";
}
}
void shuffle(int & a,int & b){
int c;
c=a;
a=b;
b=c;
}
void not_shuffle(int & a,int & b){
int c;
a=a;
b=b;
}
void sorting(int A[],int  sze){
    for(int j=0;j<sze;j++ ){
            for(int i=0;i<sze;i++ ){
if (A[i+1]<A[i]){
    shuffle(A[i+1],A[i]);

}
else{
not_shuffle(A[i+1],A[i]);
}
}

}
}
int main()
{

    int sizze=10;
    int B[sizze];
    arrar_dec(B,sizze);
       cout<<"BEFORE SORTING: "<<endl;
       print_array(B,sizze);
sorting(B,sizze);
cout<<"\n AFTER SORTING: "<<endl;
print_array(B,sizze);

cout<<"\nMAX: "<< B[sizze-1]<<endl;
cout<<"MIN: "<< B[sizze-sizze]<<endl;
    return 0;
}
