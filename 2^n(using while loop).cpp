#include <iostream>
using namespace std;
int main(){
    int n,i;
    long long int val;
    i=0;
    val=1;
    cin>>n;
    while(i<n){
        val=val*2;
        i++;
    }
    cout<<"Value of 2^"<<n<<": "<<val;
    return 0;
}