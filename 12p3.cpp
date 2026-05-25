//WAF to print all the unique numbers in an array
#include<iostream>
using namespace std;
int uniqueNum(int arr[],int sz){
    int unique=0;
    for(int i=0;i<sz;i++){
        unique=unique^arr[i];
    }
    return unique;
}
int main(){
    int arr[]={2,4,4,1,1,3,3,6};
    int sz=8;
    int unique=uniqueNum(arr,sz);
    cout<<"Unique Number is: "<<unique;
}