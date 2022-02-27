 #include<iostream>
using namespace std;

int main(){
    int n,i,j,k,m=1;
    cout<<"Enter the number of rows = ";
    cin>>n;
    
    for(i=n;i>=1;i--){
            for(j=1;j<=i-1;j++){  
                cout<<" ";
            }
            for(k=1;k<=m;k++){
                cout<<"*";
            }
        cout<<endl;
        m++;
    }
    return 0;
}   