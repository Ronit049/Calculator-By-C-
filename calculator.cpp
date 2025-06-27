#include <iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"Enter the opration : (+,-,*,/):";
    cin >> op;
    cout<<"Enter the numbers to calculate :";
    cin>>num1>>num2;


    switch(op){
        case '+':
        cout<<"Result : "<<num1+num2;
        break;
        case '-':
        cout<<"Result : "<<num1-num2;
        break;
        case '*':
        cout<<"Result : "<<num1*num2;
        break;
        case '/':
        if(num2 != 0)
        cout<<"Result : "<<num1/num2;

        else 
        cout<<"Error:Dvision by zero";
        break;
        default:
        cout<<"Invalid Operator";
        break;
    }
    return 0;
}