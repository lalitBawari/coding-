#include<bits/stdc++.h>
using namespace std;
int solution(int arr[],int n,int data){
for(int i=0;i<n;i++){
 if(arr[i]==data){
   return i;
 }
}
return -1;
}
int main(){
 int n,data, k;
 cin>>n;
 cin>>k;
 int arr[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }
  cin>>data;

 cout<<solution(arr,n,data);
}