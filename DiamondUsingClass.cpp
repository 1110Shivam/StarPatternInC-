#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j,k,stars=1;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        int spaces = n-1;
        for(i=1;i<=n;i++){
        for(j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(k=1;k<=stars;k++){
            cout<<"*";
        }
        if(spaces>i){
            spaces=spaces-1;
            stars=stars+2;
        }
        if(spaces<i){
            spaces=spaces+1;
            stars=stars-2;
        }
        cout<<endl;
    }
        return 0;
}
};
int main(){
    StarPattern obj;
    obj.disp();
    return 0;
}