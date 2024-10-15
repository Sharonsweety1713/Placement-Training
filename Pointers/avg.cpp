#include<iostream>
using namespace std;
int avg(int *arr,int n){
    
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=*(arr+i);
    }
    float k=s/n;
    return k;
    
}

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<avg(a,n);
    
}
