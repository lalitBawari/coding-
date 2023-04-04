#include<bits/stdc++.h>
using namespace std;
int dp[100001];                            //size of dp 
int solution(int i,int arr[]){
  if(i<=-1){                            //if index of dp become -1 it mean no other element left so return 0
    return 0;
  }
  if(dp[i]!=-1){                       //return ddp value when its index is not -1
    return dp[i];
  }
  int result1=arr[i]+solution(i-2,arr);     //condition 1
  int result2=solution(i-1,arr);            //condition 2
  return dp[i]=max(result1,result2);        //check maximum value from both result
}
int main(){
    int n;
    cin>>n;
    dp[n];
    memset(dp,-1,sizeof(dp));   //fill block of all memory with -1 value
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    cout<<solution(n-1,arr);     //search element from last(n-1)
}