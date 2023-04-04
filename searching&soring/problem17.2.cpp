#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int l=0;l<n-3;l++){
        for(int k=l+1;k<n-2;k++){
           int i=k+1,j=n-1;
           while(i<j){
             int sum=arr[l]+arr[k]+arr[i]+arr[j];            
             if(sum==p){
               cout<<arr[l]<<","<<arr[k]<<","<<arr[i]<<","<<arr[j]<<"\n";
               i++;
               j--;
             }
             else if(sum<p){
               i++;
             }
             else{
                j--;
             }
           }
        }
    }
}