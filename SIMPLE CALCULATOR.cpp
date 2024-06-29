//Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.

#include<iostream>
using namespace std;

int main()
{
    float num1,num2;
    char choice;
    float sum,sub,pro,div;
    while(1)
    {
        cout<<endl<<"***************CALCULATOR****************"<<endl;
        cout<<"Enter first number"<<endl;
        cin>>num1;
        cout<<"Choose an operation to perform"<<endl;
        cout<<"(+)Addition"<<endl<<"(-)Subtraction"<<endl<<"(*)Multiplication"<<endl<<"(/)Division"<<endl<<"(!)Exit"<<endl;
        cin>>choice;
        cout<<"Enter second number"<<endl;
        cin>>num2;
        switch(choice)
        {
            case '+':
            sum=num1+num2;
            cout<<"Sum = "<<sum<<endl;
            break;

            case '-':
            sub=num1-num2;
            cout<<"Difference = "<<sub<<endl;
            break;

            case '*':
            pro=num1*num2;
            cout<<"Product = "<<pro<<endl;
            break;

            case '/':
            if (num2 != 0)
            {
                div=num1/num2;
                cout<<"Division = "<<div<< endl;
            }
            else
            {
                cout<<"Error: Cannot divide by zero!"<< endl;
            }
            break;

            case '!':exit(0);

            default:printf("wrong choice");
        }
    }
    return 0;
}
