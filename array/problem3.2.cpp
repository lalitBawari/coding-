#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    priority_queue<int>qu;
    for(int i=0;i<n;i++){
        qu.push(arr[i]);
        if(qu.size()>k){
           qu.pop();
        }
    }
    cout<<qu.top();
}