#include <bits/stdc++.h>
using namespace std;

void resolu() {
  string p;
  cin>>p;
  int size=0;
  vector <char> str(p.begin(),p.end());
  size=str.size();
  if (size>10){
    p=str[0]+to_string(size-2)+str[size-1];
    cout<<p<<endl;
  }
  else{
    cout<<p<<endl;
  }
  
}
int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}