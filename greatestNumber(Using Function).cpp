#include <iostream>
using namespace std;

int greatest(int a,int b,int c){
    if(a>=b){
        if(a>=c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>=c){
            return b;
        }else{
            return c;
        }
    }
}

int main(){
    int num1,num2,num3,g;
    cout<<"Enter the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    cout<<"Enter the Third Number: ";
    cin>>num3;

    g=greatest(num1,num2,num3);

    cout<<"The Greatest Number is: "<<g;

    return 0;
}