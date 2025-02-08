#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int a=0;
  vector <int> n(8);
  for (int i=0;i<8;i++){
    cin>>n[i];
  }
  if (n[0]==n[2]){
    if (n[1]<0){
      n[1]=n[1]*-1;
      a=n[1]+n[3];
      a=pow(a, 2);
    }
    else{
      a=n[1]-n[3];
      a=pow(a, 2);
    }
  }
  else{
    if (n[2]<0){
      n[2]=n[2]*-1;
      a=n[2]+n[0];
      a=pow(a, 2);
    }
    else{
      a=n[2]-n[0];
      a=pow(a, 2);
    }
  }
  cout<<a<<endl;
}
int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}