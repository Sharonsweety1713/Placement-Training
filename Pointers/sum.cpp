#include<iostream>
using namespace std;
int sum(int *arr,int n){
    
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=*(arr+i);
    }
    return s;
    
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<sum(a,n);
    
}
