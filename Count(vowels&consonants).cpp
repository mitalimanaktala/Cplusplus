#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    int V_count=0,C_count=0;

    cout<<"Enter the String: ";
    getline(cin,str1);

    for(int i=0;i<str1.size();i++){
        char ch=str1[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){

            if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                V_count++;
            
            }else{
                C_count++;
            }
        }
    }
    
    cout<<"Vowels Count is: "<<V_count<<endl;
    cout<<"Consonants Count is: "<<C_count;

    return 0;
}