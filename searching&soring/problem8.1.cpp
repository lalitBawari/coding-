#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;   
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
     int ans=-1;
    for(int i=0;i<n;i++){
        int y=arr[i]+x;
        for(int j=0;j<n;j++){
            if(arr[j]==y){
                ans=1;
            }
        }
    }
    cout<<ans;
}