#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int miss,repeat;
    for(int i=0;i<n;i++){
     if(arr[abs(arr[i])-1]>0){
      arr[abs(arr[i])-1]=- arr[abs(arr[i])-1];
     }
     else{
       repeat=abs(arr[i]);
     }
    }
    for(int i=0;i<n;i++){
     if(arr[i]>0){
      miss=i+1;
      break;
     }
    }
    cout<<repeat<<" "<<miss;
}
