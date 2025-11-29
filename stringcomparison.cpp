#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char name[5];
    char user[]="mohit";

    cin>>name;
    if(strcmp(name,user)==0){ //0=equal and 1=notequal
        cout<<"Welcome back, Mohit."<<endl;
    }else{
        cout<<"Wrong user, please try again."<<endl;
    }
    return 0;
}