#include <iostream>
using namespace std;

void Circle_details(int r){
    float area=3.14*r*r;
    float c=2*3.14*r;

    cout<<"Area: "<<area<<"\tCircumference: "<<c;
}

int main(){
    int radius;
    cout<<"Enter the Radius: ";
    cin>>radius;
    Circle_details(radius);

    return 0;
}