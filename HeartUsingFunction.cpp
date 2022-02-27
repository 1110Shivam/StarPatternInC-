#include<iostream>
using namespace std;
int disp(int);

int disp(int n){
    int i,j;
    for(i=n/2;i<=n;i+=2){
        for(j=1;j<n-i;j+=2){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(j=1;j<=(i*2)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number of rows = ";
    cin>>n;
    disp(n);
    return 0;
}