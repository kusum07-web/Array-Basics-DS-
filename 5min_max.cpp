#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={12,15,14,-98,56,65};
    int i,size=6;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(i=0;i<6;i++){
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);

    }
    cout<<"Smallest:"<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;
    return 0;
}