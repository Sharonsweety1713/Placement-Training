#include<iostream>
using namespace std;
int fibanocci(int n,int dp[]){
    
    if(n<=1)
    return dp[n];
    else if (dp[n]!=0)
    return dp[n];
    
    dp[n]= fibanocci(n-1,dp)+fibanocci(n-2,dp);
    return dp[n];
}

int main()
{
    int a;
    cin>>a;
    int dp[a+1]={0};
    dp[0]=0;
    dp[1]=1;
    cout<<fibanocci(a,dp);
    
}
