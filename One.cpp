#include<iostream>
using namespace std;

int main(){
    int n,i,j,m;
    cout<<"Enter the number of rows = ";
    cin>>n;
    m=n/2+1;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){  
                if(j==m||i==n||(i+j == m && j <= m)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    return 0;
}   