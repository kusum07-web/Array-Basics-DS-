// find smallest number in the array
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6], i ;
    int size=6;
    int smallest= INT_MAX;
    cout<<"Enter the elements :";
    for(i=0;i<size;i++){
        cin>>arr[i];
        
    }
    cout<<"elements are :";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Smallestnumber is equal to "<<smallest<<endl;
    
    return 0;
}