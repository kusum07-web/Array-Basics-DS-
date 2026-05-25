//WAF to calcuate the sum and product of all numbers in a array
#include<iostream>
using namespace std;
int AddMat(int arr[],int sz){
    int sum=0;
    for(int i=0;i<sz;i++)
    {
        sum=sum+arr[i];
    }
    return sum;

}
int productMat(int arr[],int sz){
    int product=1;
    for(int i =0;i<sz;i++)
    {
        product=product*arr[i];
    }
    return product;
}
int main(){
    int arr[]={4,5,6};
    //int sum=0;
    int sz=3;
    int sum=AddMat(arr,sz);
int product=productMat(arr,sz);

        cout<<"Sum of element of array is: "<<sum<<endl;
        cout<<"product of the elemenets of the matrix :"<<product<<endl;

    
} 