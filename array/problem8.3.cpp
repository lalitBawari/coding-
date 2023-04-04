#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int max_th=0;
    for(int i=0;i<n;i++){
        max_th+=arr[i];
        if(max_th>max){
            max=max_th;
        }
        if(max_th<0){
            max_th=0;
        }
    }
     cout<<max;
}