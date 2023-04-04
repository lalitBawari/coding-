#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=0;
        int s=1;
      while(j<n){
        if(i==j){
          j++;
        }
        else{
            s*=arr[j];
            j++;
        }
      }
      cout<<s<<" ";
    }
}