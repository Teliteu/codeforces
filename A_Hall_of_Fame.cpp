#include <bits/stdc++.h>
using namespace std;

void resolu() {
  string k="";
  int n=0;
  cin>>n>>k;
  int R=0;
  int L=0;
  int oi=-1;
  vector <char> str(k.begin(),k.end());
  for (long long i=0;i<n;i++){
    if(str[i]==char('R') && str[i+1]==char('L')){
      R=R+1;
    }
    if(str[i]==char('L') && str[i+1]==char('R')){
      L=L+1;
      oi=i;
    }
  }
  if(R>0){
    cout<<0<<endl;
  }
  else{
    if(L>0){
      if (oi==0){
        cout<<1<<endl;
      }
      else{
        cout<<oi+1<<endl;
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