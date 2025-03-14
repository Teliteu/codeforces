#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long a;
  long long b;
  long long c=0;
  long long d=1;
  long long e;
  cin>>a>>b;
  vector<long long> aa(a);
  for (long long i=0;i<a;i++){
    cin>>aa[i];
  }
  for(long long i=0;i<a;i++){
    if(aa[i]==d){
      c=c+1;
      d=d+1;
    }
  }
  e=a-c;
  if(e%b==0){
    cout<<e/b<<endl;
  }
  else{
    cout<<e/b+1<<endl;
  }
}


int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}