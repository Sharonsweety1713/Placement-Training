#include<iostream>
using namespace std;
int max(int *arr,int n){
    
    int s=*arr;
    for(int i=0;i<n;i++)
    {
        if(s<*(arr+i))
        s=*(arr+i);
    
    }
    
    return s;
    
}

int main()
{
    int a[]={1,2,123,4,85};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<max(a,n);
    
}
