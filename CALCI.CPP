#include<iostream.h>
#include<conio.h>
int main(){
    double num1,num2;
    char operation;

    cout<<"Enter first Number: ";
    cin>>num1;

    cout<<"Enter Second Number: ";
    cin>>num2;

    cout<<"Enter the operation Symbol: ";
    cin>>operation;

    double result;

    switch(operation){
	case '+':
	   result = num1 + num2;
	   break;
	case '-':
	    result=num1-num2;
	    break;
	case '*':
	    result=num1 * num2;
	    break;
	case '/':
	    if (num2!=0)
		result= num1/num2;
	    else{
		cout<<"Error.Division by zero is not allowed."<<endl;
		return 1;
	    }
	    break;
	default:
	    cout<<"Error.Invalid Operator"<<endl;
	    return 1;
    }
    cout<<"Result"<<result<<endl;
    return 0;
}


