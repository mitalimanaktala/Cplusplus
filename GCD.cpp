#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the number1: ";
    cin>>num1;
    cout<<"Enter the number2: ";
    cin>>num2;

    while(num2!=0){
        int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    cout<<"GCD = "<<num1<<endl;
    return 0;
}