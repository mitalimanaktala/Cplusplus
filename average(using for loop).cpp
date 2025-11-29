#include <iostream>
using namespace std;
int main(){
    int num,val;
    int sum=0;
    float average;

    cout<<"Enter the value of num: ";
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>val;
        sum+=val;
    }

    average=(float)sum/num;
    cout<<"Average: "<<average;
}