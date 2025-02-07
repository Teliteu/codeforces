#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  cin>>a>>b>>c;
  int oi=0;
  int pre=0;
  while(oi<c){
    oi=oi+1;
    pre=pre+(a*oi);
  }
  if (pre<=b){
    cout<<0;
  }
  else{
    pre=abs(pre-b);
    cout<<pre;
  }
}	