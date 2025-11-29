#include <iostream>
#include <string>
using namespace std; 

int main(){
    string str1;
    cout<<"Enter the String: ";
    getline(cin,str1);
    

    for(int i=0;i<str1.size();i++){
        int count=1;

        bool alreadyCounted=false;
        for(int k=0;k<i;k++){
            if(str1[i]==str1[k]){
                alreadyCounted=true;
                break;
            }
        }
        if(alreadyCounted) continue;

        for(int j=i+1;j<str1.size();j++){
            
            if(str1[i]==str1[j]){

                count++;
            }
        }
        if(count>1){
            cout<<str1[i]<<" comes "<<count<<endl;
        }
    }
    
    return 0;
}