#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long a;
  cin>>a;
  vector<long long> aa(a);
  long long oi=0;
  for (long long i=0;i<a;i++){
    cin>>aa[i];
  }
  for (long long i=1;i<a;i++){
    if (aa[i-1]%2==aa[i]%2){
      oi=oi+1;
    }
  }
  cout<<oi<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}