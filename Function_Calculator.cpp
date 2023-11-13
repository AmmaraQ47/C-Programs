//Calculator using Function
#include<iostream>
using namespace std;
float sum(float num1, float num2)
{
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    return num1+num2;
}
float sub(float num1, float num2)
{
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    return num1-num2;
}
float mul(float num1, float num2)
{
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    return num1*num2;
}
float Div(float num1, float num2)
{   
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    return num1/num2;
}

int main()
{
    int num1,num2;
    int choice;
    cout<<"Press 1 for Addition."<<endl;
    cout<<"Press 2 for Subtraction."<<endl;
    cout<<"Press 3 for Multiplication."<<endl;
    cout<<"Press 4 for Division."<<endl;
    cout<<"Enter Your Choice Please: ";
    cin>>choice;
    if(choice==1)
    {   
        cout<<"**Lets Get the Sum of your Desired Numbers**"<<endl;
        cout<<sum(num1,num2);
    }
    else if(choice==2)
    {
        cout<<"**Lets Get the Subtraction of your Desired Numbers**"<<endl;
        cout<<sub(num1,num2);
    }
    else if(choice==3)
    {
        cout<<"**Lets Get the Multiplication of your Desired Numbers**"<<endl;
        cout<<mul(num1,num2);
    }
    else if(choice==4)
    {
        cout<<"**Lets Get the Division of your Desired Numbers**"<<endl;
        cout<<Div(num1,num2);
    }
    else
    {
        cout<<"Invalid Option Dear!";
    }
}