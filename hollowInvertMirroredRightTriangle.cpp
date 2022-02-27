#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter the number of rows = ";
    cin>>n;
    int m=n;
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=1;k<=m;k++){
            if(i==1||k==1||k==m)
                cout<<"*";
            else
                cout<<" ";
        }
        m--;
        cout<<endl;
    }
}