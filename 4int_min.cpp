//find largest from the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={1,2,3,4,5};
    int size=5;

    int large=INT_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]>large){
            large=nums[i];
        }
    }
    cout<<"Largest value is "<<large<<endl;
}
