#include<iostream>
using namespace std;


    int linearSearch(int arr[],int sz,int target)
    {
        for(int i=0;i<sz;i++)
        {
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }
    int main()
    {
        int arr[]={12,15,14,78,45,5,6};
        int sz=7;
        int target;
        cout<<"Enter the target: ";
        cin>>target;
        cout<<linearSearch(arr,sz,target)<<endl;

        return 0;
    }
    //Time complexity =O(n) 
