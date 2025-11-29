#include <iostream>
using namespace std;
int main(){

    int arr[3][3];

    cout<<"Enter the values: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"The values of 2D array: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}