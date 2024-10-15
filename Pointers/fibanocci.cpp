#include<iostream>
using namespace std;
long fibanocci(int n){
    
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    
    return fibanocci(n-1)+fibanocci(n-2);
    
}

int main()
{
    int a;
    cin>>a;
    cout<<fibanocci(a);
    
}
