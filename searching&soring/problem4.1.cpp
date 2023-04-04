#include<bits/stdc++.h>
using namespace std;
int count_square(int n){
  int a=sqrt(n);
  if(a*a==n){
   return a-1;
  }
  else {
    return a;
  }
}
int main(){
    int n;
    cin>>n;
   int result= count_square(n);
   cout<<result;
}