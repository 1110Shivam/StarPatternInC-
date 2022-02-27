 #include<iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cout<<"Enter the number of rows = ";
    cin>>n;
    
    for(i=n;i>=1;i--){
        for(j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(k=1;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}   