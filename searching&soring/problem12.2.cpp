#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    sort(arr,arr+n);     
    int count =0;
    for(int k=0;k<n-2;k++){     
      int i=k+1;                
      int j=n-1;                
      while(i<j){
        int s=arr[i]+arr[j]+arr[k];
        if(s<sum){
          count +=(j-i);          
          i++;
        }
        else{
            j--;
        }
      }
    }
    cout<<count;
}