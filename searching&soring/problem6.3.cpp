#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int major=0,count=1;
    for(int i=0;i<n;i++){
      if(arr[major]==arr[i]){
       count++;
      }
      else{
        count--;
      }
    if(count==0){
      major=i;
      count=1;
    }
    }
    if(count>1){
      cout<<arr[major];
      }
    else{
         cout<<"-1";
      }
}