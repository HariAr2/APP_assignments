/* simple mini calculator program in C++ that uses subroutines for basic arithmetic operations*/
#include<iostream>
using namespace std;

int add(int RA2211003010023_num1,int RA2211003010023){
    return RA2211003010023_num1+RA2211003010023;
}
int sub(int RA2211003010023_num1,int RA2211003010023_num2){
    return RA2211003010023_num1-RA2211003010023_num2;
}
int mul(int RA2211003010023_num1,int RA2211003010023_num2){
    return RA2211003010023_num1*RA2211003010023_num2;
}
int divide(int RA2211003010023_num1,int RA2211003010023_num2){
    return RA2211003010023_num1/RA2211003010023_num2;
}

int main(){
    int RA2211003010023_num1,RA2211003010023_num2;
    int choice,result;

    cout<<"Enter 1st Number: ";
    cin>>RA2211003010023_num1;
    cout<<"Enter 2nd Number: ";
    cin>>RA2211003010023_num2;

    cout<<"Menu:\n1. Addttion\n2. Subtraction\n3. Multiplication\n4. Division\nEnter Choice to do the following basic arithmetic operations: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        result=add(RA2211003010023_num1,RA2211003010023_num2);
        cout<<"Result: "<<RA2211003010023_num1<<" + "<<RA2211003010023_num2<<" = "<<result;
        break;
    case 2:
        result=sub(RA2211003010023_num1,RA2211003010023_num2);
        cout<<"Result: "<<RA2211003010023_num1<<" - "<<RA2211003010023_num2<<" = "<<result;
        break;
    case 3:
        result=mul(RA2211003010023_num1,RA2211003010023_num2);
        cout<<"Result: "<<RA2211003010023_num1<<" x "<<RA2211003010023_num2<<" = "<<result;
        break;
    case 4:
        if(RA2211003010023_num2!=0){
            result=divide(RA2211003010023_num1,RA2211003010023_num2);
            cout<<"Result: "<<RA2211003010023_num1<<" / "<<RA2211003010023_num2<<" = "<<result;
            break;
        } 
        else{
            cout<<"Zero can't be Divided";
            break;
        }
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }
}