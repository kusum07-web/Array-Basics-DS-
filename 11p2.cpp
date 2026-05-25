//WAF to  the max and min number of a array
#include<iostream>
#include<climits>
using namespace std;
int minimum(int arr[],int sz){
    int small=INT_MAX;
    for(int i=0;i<sz;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    return small;
};
int maximum(int arr[],int sz){
        int large=INT_MIN;
        for(int i=0;i<sz;i++){
            if(arr[i]>large){
                large=arr[i];
            }
        }
        return large;
};
int main(){
    int arr[]={1,2,3,4,5,6};
    int sz=6;
    int small=minimum(arr,sz);
    int large=maximum(arr,sz);
cout<<"Smaller elmenet: "<<small<<endl;
cout<<"Larger number: "<<large<<endl;

}
