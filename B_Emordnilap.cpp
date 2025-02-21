#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long a;
  cin>>a;
  long long oi=1;
  long long k=1;
  long long final=0;
  for(long long i=1;i<a+1;i++){
    oi=(k*oi)%1000000007;
    k=k+1;
  }
  final=oi*a%1000000007;
  final=final*(a-1)%1000000007;
  cout<<final<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}