#include <bits/stdc++.h>
using namespace std;


int main(){
  int t;
  int certo=0;
  cin>>t;
  for (int i=0;i<t;i++){
    vector <int> a(3);
    int sum=0;
    for (int i=0; i<3; i++){
      cin>>a[i];
      sum=sum+a[i];
    }
    if (sum>=2){
      certo=certo+1;
    }
  }
  cout<<certo<<endl;
}