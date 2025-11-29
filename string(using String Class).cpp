#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName, firstName, lastName;
    cin>>firstName>>lastName;

    fullName=firstName+lastName;

    cout<<fullName<<endl;
    cout<<fullName.size()<<endl;
    cout<<fullName[5]<<endl;
    cout<<firstName.substr(0,3)<<endl;
    cout<<firstName.length();

    return 0;

}