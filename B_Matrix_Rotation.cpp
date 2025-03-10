#include <bits/stdc++.h>
using namespace std;

void resolu() {
  string str;
  vector <int> b(4);
  string bu="";
  for (int i=0;i<4;i++){
    cin>>b[i];
  }
  int b0=b[0];
  int b1=b[1];
  int b2=b[2];
  int b3=b[3];
  
  if (b[0]<b[2] && b[0]<b[1] && b[1]<b[3] && b[2]<b[3]){
    bu="YES";
  }
  for (int i=0;i<4;i++){
    b[0]=b2;
    b[1]=b0;
    b[2]=b3;
    b[3]=b1;
    if (b[0]<b[2] && b[0]<b[1] && b[1]<b[3] && b[2]<b[3]){
      bu="YES";
      break;
    }
  }
  for (int i=0;i<4;i++){
    b[0]=b3;
    b[1]=b2;
    b[2]=b1;
    b[3]=b0;
    if (b[0]<b[2] && b[0]<b[1] && b[1]<b[3] && b[2]<b[3]){
      bu="YES";
      break;
    }
  }
  for (int i=0;i<4;i++){
    b[0]=b1;
    b[1]=b3;
    b[2]=b0;
    b[3]=b2;
    if (b[0]<b[2] && b[0]<b[1] && b[1]<b[3] && b[2]<b[3]){
      bu="YES";
      break;
    }
  }
  if (bu=="YES"){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}