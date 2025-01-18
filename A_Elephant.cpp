#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a;
  int cinco=5;
  long long contagem=0;
  cin>>a;;
  while(a>0){
    if (cinco<=a){
      a=a-cinco;
      contagem=contagem+1;
    }
    else{
      contagem=contagem+1;
      break;
    }
  }
  cout<<contagem;
}	