#include<bits/stdc++.h>
using namespace std;
void calculate()
{
    int number1,number2;
    char op;
    int answer;
    while(1)
    {
        cout<<"Dear User, Enter two numbers along with the operator(+ or - or * or /) of the operation you want to carry out, Press '$' if you want to terminate the application"<<endl<<endl;
        cin>>number1>>number2>>op;
        switch(op)
        {
            case '+' : answer=number1+number2;
                       break;
            case '-' : answer=number1-number2;
                       break;
            case '*' : answer=number1*number2;
                       break;
            case '/' : try
                       {
                            if(number2 == 0)
                            {
                                throw number2;
                            }
                       }
                       catch(int number2)
                       {
                            cout<<"Denominator cannot be zero hence the operation will be terminated"<<endl;
                            //Checking for edge case
                            exit(0);
                       }
                       answer=number1/number2;
                       break;
            case '$' : exit(0);
            default: cout<<"You have entered invalid operator"<<endl;
                      exit(0);
        }
    cout<<"The answer for the entered operation on the two numbers is : "<<answer<<endl<<endl;
    }
}
main()
{
    cout<<"********** WELCOME TO CALCULATOR APP **********"<<endl<<endl;
    calculate();
    return 0;
}
