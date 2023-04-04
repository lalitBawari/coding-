#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
     if(n==1){
         return arr[0];
        }
         int count=1,p=-1;
        sort(arr,arr+n);
        for(int i=1;i<=n;i++){
            if(arr[i-1]==arr[i]){
                count++;
            }
            else{
                if(count>n/2){
                    p= arr[i-1];
                }
                count =1;
            }
        }
        cout<<p;
}