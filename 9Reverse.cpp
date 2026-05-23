#include<iostream>
using namespace std;
void reverse(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,2,3,6,5,8};
    int sz=6;

    reverse(arr,sz);

    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}
//time complexity=O(n)