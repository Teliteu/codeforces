#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long a;
  cin>>a;
  long long contador=0;
  vector<long long> aa(a);
  for (long long i=0;i<a;i++){
    cin>>aa[i];
    if (aa[i]==1){
      contador=contador+1;
    }
  }
  if(contador%2!=0){
    contador=contador-1;
  }
  cout<<a-contador+(contador/2)<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}