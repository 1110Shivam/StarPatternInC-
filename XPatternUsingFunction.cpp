#include<iostream>
using namespace std;
int disp(int);
int disp(int n){
        int i,j,m=2*n-1;
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

int main(){
    int n;
    cout<<"Enter the number of rows = ";
    cin>>n;
    disp(n);
    return 0;
}