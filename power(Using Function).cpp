#include <iostream>
using namespace std;

long power(int a,int b){
    int value=1;
    for(int i=1;i<=b;i++){
        value=value*a;
    }
    return value;
}

int main(){
    int num,pow;
    long result;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Enter the Power: ";
    cin>>pow;

    result=power(num,pow);

    cout<<"Result of "<<num<<" power "<<pow<<": "<<result;

    return 0;
}