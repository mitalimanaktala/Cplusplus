#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char fullName[30];
    char firstName[15];
    char lastName[15];

    cin>>firstName;
    cin>>lastName;

    strcpy(fullName,firstName);
    strcat(fullName, " ");
    strcat(fullName,lastName);

    cout<<fullName;
    return 0;
}