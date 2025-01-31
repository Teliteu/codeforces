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
  long long z=0;
  long long zz=0;
  string str="";
  sort(aa.rbegin(),aa.rend());
  if (aa[0]==aa[1]){
    oi=aa[0];
    aa[0]=aa[a-1];
    aa[a-1]=oi;
    if (aa[0]==aa[1]){
      cout<<"NO"<<endl;
    }
    else{
      for (long long i=0;i<a;i++){
        str=str+to_string(aa[i])+" ";
      }
      cout<<"YES"<<endl<<str<<endl;
    }
  }
  else{
    for (long long i=0;i<a;i++){
      str=str+to_string(aa[i])+" ";
    }
    cout<<"YES"<<endl<<str<<endl;
  }
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}