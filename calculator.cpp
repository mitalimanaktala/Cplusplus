#include <iostream>
using namespace std;
int main(){
    int num1,num2,option;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division"<<endl;
    cout<<"Enter the Preference: ";
    cin>>option;
    switch(option){
        case 1 : 
            cout<<"number1 + number2 = "<<(num1+num2);
            break;
        case 2: 
            cout<<"number1 - number2 = "<<(num1-num2);
            break;
        case 3:
            cout<<"number1 * number2 = "<<(num1*num2);
            break;
        case 4:
            if(num2==0){
                cout<<"number2 cannot be zero.";
            }else{
                cout<<"number1 / number2 = "<<(num1/num2);
            }
            break;
        default:
            cout<<"Invalid Preference!"<<endl;
    }
    return 0;
}