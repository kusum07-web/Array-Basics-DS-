#include<iostream>
using namespace std;
int main()
{
    int a[]={11,22,33,44,55};
    int i;
    
    for(i=0;i<5;i++){

        cin>>a[i];
    }
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}