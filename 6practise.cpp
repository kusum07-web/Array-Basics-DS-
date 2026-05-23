// same as 4th but instead of values find index
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={12,15,14,-98,65};
    int i;
    int size=5;
    int small=INT_MAX;
    int large=INT_MIN;
    int smallIndex=-1;
    int largeIndex=-1;
    for(i=0;i<size;i++){
        if(arr[i]<small){
            small=arr[i];
            smallIndex=i;
        }
        if(arr[i]>large){
            large=arr[i];
            largeIndex=i;
        }
    }
    cout<<"small:"<<smallIndex<<endl;
    cout<<"Large: "<<largeIndex<<endl;
    return 0;
}