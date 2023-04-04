#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    unordered_map<int ,int>map;
    for(int i=0;i<n;i++){
        map[a[i]++];
    }
    for(int i=0;i<m;i++){
        map[b[i]++];
    }
    cout<<map.size();
}