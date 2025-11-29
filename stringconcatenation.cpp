#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char name[5];
    char user[20] = "mohit";

    cin>>name;

    strcat(user,name);
    cout<<user<<endl;
    cout<<name<<endl;

    return 0;
}