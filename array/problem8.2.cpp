#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int pre[n];
    pre[0]=0;
    for(int i=0;i<n;i++){
      pre[i]=pre[i-1]+arr[i];
    }
    int max=INT_MIN;
    int sum;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
          sum=pre[j]-pre[i-1];
        }
        if(sum>max){
            max=sum;
        }
    }
    cout<<max;
}