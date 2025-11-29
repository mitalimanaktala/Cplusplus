#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    char c;

    cout<<"Enter the String: ";
    getline(cin,str1);
    cout<<"Enter the character: ";
    cin>>c;

    bool found=false;
    for(int i=0;i<str1.size();i++){
        if(str1[i]==c){
            cout<<c<<" Position is "<<i<<endl;
            found=true;
            break;
            
        }
    }

    if(!found){
        cout<<"It does not exist."<<endl;
    }

    return 0;
}