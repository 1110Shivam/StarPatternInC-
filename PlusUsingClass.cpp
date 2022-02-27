#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
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
};
int main(){
    StarPattern obj;
    obj.disp();
    return 0;
}