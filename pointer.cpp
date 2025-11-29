#include <iostream>
using namespace std;

int main(){
    int a=5;
    float b=2.4;
    int *c;
    c=&a;

    float* d;
    d=&b;
    
    int arr[10];
    cout<<arr; //gives index 0 address
    return 0;
}