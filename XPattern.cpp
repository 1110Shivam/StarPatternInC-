#include<iostream>
using namespace std;

int main(){
    int n,i,j,m;
    cout<<"Enter the number of rows = ";
    cin>>n;
    m=2*n-1;
        for(i=1;i<=m;i++){
            for(j=1;j<=m;j++){  
                if(i==j||j==(m-i+1)){
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