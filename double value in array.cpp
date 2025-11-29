#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin >> n;
    int arr[n];
    
    cout<<"Enter the value of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Values doubled in array: "<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]*2<<"\t";
    }
    return 0;
}