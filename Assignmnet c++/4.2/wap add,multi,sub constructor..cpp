//Write a program of Addition, Subtraction, Division, Multiplication using constructor.


#include<iostream>
using namespace std;

main(){

  char op;
  float num1, num2;

  cout<<"Enter operator: +, -, *, /: ";
  cin>>op;

  cout<<"Enter two operands: ";
  cin>>num1 >> num2;

  switch(op){

    case '+':
      cout<<num1<<" + "<<num2<<" = "<< num1+num2;
      break;

    case '-':
      cout<<num1<<" - "<<num2<<" = "<< num1-num2;
      break;

    case '*':
      cout<<num1<<" * "<<num2<<" = "<< num1*num2;
      break;

    case '/':
      cout<<num1<<" / "<<num2<<" = "<< num1/num2;
      break;

    default:
      
      cout<<"Error! operator is not correct";
      break;
  }

  
}