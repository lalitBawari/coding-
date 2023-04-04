#include<bits/stdc++.h>
using namespace std;
static bool comp(int a,int b){
 return __builtin_popcount(a)>__builtin_popcount(b);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    sort(arr,arr+n,comp);
     for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
    }
}