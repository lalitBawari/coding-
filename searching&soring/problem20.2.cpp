#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,k;
    cin>>n1>>n2>>k;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
    cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
    cin>>arr2[i];
    }
    int arr3[n1+n2];
    int i=0,j=0,l=0;
    while(i<n1 && j<n2){
      if(arr1[i]<=arr2[j]){
        arr3[l++]=arr1[i++];
      }
      else{
        arr3[l++]=arr2[j++];
      }
    }
    while(i<n1){
     arr3[l++]=arr1[i++];
    }
    while(j<n2){
     arr3[l++]=arr2[j++];
    }
    cout<<arr3[k-1];
}