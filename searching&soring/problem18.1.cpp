#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    } 
   pair<int,int>arr1[n];
   for(int i=0;i<n;i++){
     arr1[i]={arr[i],i};
   }
   int count=0;
   sort(arr1,arr1+n);
   for(int i=0;i<n;i++){
    if(arr1[i].second==i){
       continue;
    }
    else{
      count++;
      swap(arr1[i],arr1[arr1[i].second]);
    }
   }
   cout<<count;
}