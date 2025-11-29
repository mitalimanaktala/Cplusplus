#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[5];
    char user[20];

    cin>>name;
    strcpy(user,name);
    cout<<user<<endl;
    cout<<name<<endl;
    cout<<strlen(user);

    return 0;
}