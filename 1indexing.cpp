#include<iostream>
using namespace std;
int main()
{
    int marks[5]={99,100,55,88,96};//declaration and initialization of array
    int size=5;
    cout<<marks[0]<<endl; //indexing
    cout<<marks[1]<<endl; //indexing
    cout<<marks[2]<<endl; //indexing
    cout<<marks[4]<<endl; //indexing
    cout<<marks[3]<<endl; //indexing
    cout<<marks[5]<<endl; //indexing
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(marks)/sizeof(int);
    return 0;
}

