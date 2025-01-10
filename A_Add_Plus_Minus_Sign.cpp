#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int n;
  cin>>n;
  string str;
  cin>>str;
  vector <char> b(str.begin(), str.end());
  int bb=0;
  char aa;
  int sum=0;
  string sums;
  for (int i=0;i<n;i++){
    aa=b[i];
    bb=(int)aa-48;
    if (bb==1 && sum>=1){
      sums=sums+"-";
      sum=sum-bb;
    }
    else{
      if(i==0){
        sum=sum+bb;
      }
      else{
        sums=sums+"+";
        sum=sum+bb;
      }
    }
  }
  cout<<sums<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}