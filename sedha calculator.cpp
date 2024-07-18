#include <iostream>



using namespace std;
void Init()
{
cout<<"Welcome to seedha TAREEN Calculator by Sir JUNAID AKHTAR urf JD, Sir SARFRAZ and Sir Rafay for BEHTEREEN DEBUGGERS ONLY!"<<endl<<endl
<<"Enter number 65536 to END program"<<endl<<endl;
}
float number()
{

    float z;
    cout<<"Enter Any REAL Number: ";
    cin>>z;

    return z;
}
char operation()
{
        char a;
        cout<<"Enter Operation ( *,+,/,- ) ";
        cin>>a;

            if(a=='/')
            {
                return '/';
            }
            if(a=='*' )
            {
                return '*';
            }
            if(a=='-' )
            {
                return '-';
            }
            if(a=='+' )
            {
                return '+';
            }
            else{
                cout<<endl<<"Invalid Input... Enter AGain !!"<<endl;
                operation();
                }

    }


float DoCalculation(float j, float k, char op)
{
    float answer=0;
        switch (op)
        {
            case '/':

            {
                answer=j/k;
                break;

            }
            case '*':

            {
                answer=j*k;
                break;
            }
            case '+':
            {
                answer=j+k;
                break;
            }
            case '-':
            {
                answer=j-k;
                break;
            }
        }
    return answer;
}

float DisplayAnswer(float ans)
{
    cout<<endl<<"ANSWER: "<<ans<<endl<<endl;
}
int main()
{
    float operand1=0,operand2=0;
    char op;
    Init();
    operand1=number();

    while(operand2!=65536 && operand1!=65536)
    {
        op=operation();

        operand2=number();

        operand1=DoCalculation(operand1,operand2,op);

        DisplayAnswer(operand1);
    }
    return 0;
}


