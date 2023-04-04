#include<bits/stdc++.h>
using namespace std;
int solution(int arr[],int n,int data ){
 int low=0,high=n-1;
 while(low<=high){
  int mid=(low+high)/2;
  if(arr[mid]==data){
    return mid;
  }
  else if(arr[mid]>=arr[low]){
     if(arr[mid]>=data && arr[low]<=data){
        high=mid-1;
     }
     else {
        low=mid+1;
     }
  }
  else {
    if(arr[mid]<=data && arr[high]>=data){
       low=mid-1;
    }
    else{
        high=mid+1;
    }
  }
 }
 return -1;
}
int main(){
    int n,data;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    cin>>data;
    int result=solution(arr,n,data);
    cout<<result;
}