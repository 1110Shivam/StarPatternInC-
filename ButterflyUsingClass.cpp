#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        for(i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            cout<<"* ";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<"  ";
        }

        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<"  ";
        }

        for(j=1;j<=i;j++){
            cout<<"* ";
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