 #include<iostream>
using namespace std;
 
int main(){
    int n,i,j;
    cout<<"Enter the number of rows = ";
    cin>>n;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n-i+1||i==j||j==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}