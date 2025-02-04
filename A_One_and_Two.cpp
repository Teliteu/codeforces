#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long a;
  cin>>a;
  vector<long long> aa(a);
  long long contador=0;
  long long contadorr=0;
  long long contadorrr=0;
  for (long long i=0;i<a;i++){
    cin>>aa[i];
    if (aa[i]==2){
      contador=contador+1;
    }
  }
  if (contador==0){
    cout<<1<<endl;
  }
  else{
    if(contador%2==0){
      for (long long i=0;i<a;i++){
        contadorrr=contadorrr+1;
        if (aa[i]==2){
          contadorr=contadorr+1;
        }
        if (contadorr==contador/2){
          break;
        }
      }
      if(contadorrr<=a-1){
        cout<<contadorrr<<endl;
      }
      else{
        cout<<-1<<endl;
      }
    }
    else{
      cout<<-1<<endl;
    }
  }
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}