#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j,k;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        int m = n-1;
        for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=1;k<=m;k++){
            if(i==1||k==1||k==m)
                cout<<"*";
            else
                cout<<" ";
        }
        m--;
        cout<<endl;
    }
        return 0;
}
};
int main(){
    StarPattern obj;
    obj.disp();
    return 0;
}#include<iostream>
using namespace std;

class StarPattern{
    int n,i,j,k;
    public:

    int disp(){
        cout<<"Enter the number of rows = ";
        cin>>n;
        int m = n-1;
        for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=1;k<=m;k++){
            if(i==1||k==1||k==m)
                cout<<"*";
            else
                cout<<" ";
        }
        m--;
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