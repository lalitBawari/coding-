#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int q;         //input of quries
    cin>>q;

    sort(arr,arr+n);   //sort the array

    int presum_arr[n+1];  //create a new array storing tha prefix sum with 1 base indexing
    presum_arr[0]=0;
    for(int i=1;i<=n;i++){
     presum_arr[i]=presum_arr[i-1]+arr[i-1];
    }
    // find all quaries
    while(q--){
        int x;
        cin>>x;
      int idx=upper_bound(arr,arr+n,x)-arr;
      cout<<idx<<" "<<presum_arr[idx]<<endl;
    }
}