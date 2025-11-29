#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n][n],sol[n][n];

    cout<<"Enter The values: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The Matrix looks like: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"The Transpose Of Matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sol[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sol[i][j]<<"\t";
        }
        cout<<endl;
    }
}