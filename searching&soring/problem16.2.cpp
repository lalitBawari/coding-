#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int count=0,sum=0;
    unordered_map<int,int>map;
    map[0]=1;
    for(int i=0;i<n;i++){
      sum+=arr[i];                            //prefix sum 
      if(map.find(sum)!=map.end()){           // if sum repeat in map we get that sum of these element is 0 [subarray]
        count+=map[sum];                      //than count and add the frequency of repeated sum 
      }
      map[sum]++;
    }
    cout<<count;
}