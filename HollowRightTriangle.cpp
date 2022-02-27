 #include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number of rows = ";
    cin>>n;
    
    for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){  
                if(j==1 || i==j || i==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
        cout<<endl;
    }
    return 0;
}   