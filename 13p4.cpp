//WAF to print intersection of r arrays
#include<iostream>
using namespace std;
int Intersection(int arr1[],int sz1,int arr2[],int sz2){
    cout<<"Intersected elements are:";
    for(int i=0;i<sz1;i++){
        for(int j=0;j<sz2;j++){
            if(arr1[i]==arr2[j]){
                
                cout<<arr1[i]<<" ";
            }
        }
    }
}
int main(){
    int arr1[]={2,4,6,8};
    int arr2[]={1,2,4,3};
    int sz1=4;
    int sz2=4;
    Intersection(arr1,sz1,arr2,sz2);
    return 0;
}