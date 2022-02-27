#include<iostream>
using namespace std;
int disp(int);
int disp(int n){
        int i,j;
        for(i=1;i<=n;i++){
        if(i==((n/2)+1)){
            for(j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else{
            for(j=1;j<=n/2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}

int main(){
    int n;
    cout<<"Enter the odd number = ";
    cin>>n;
    disp(n);
    return 0;
}