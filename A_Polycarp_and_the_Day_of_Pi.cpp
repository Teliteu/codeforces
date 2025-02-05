#include <bits/stdc++.h>
using namespace std;

void resolu() {
  string a="";
  cin>>a;
  string k="314159265358979323846264338327";
  vector <char> str1(a.begin(),a.end());
  long long contador=0;
  vector <char> str2(k.begin(),k.end());
  for (long long i=0;i<str1.size();i++){
    if (str1[i]==str2[i]){
      contador=contador+1;
    }
    else{
      break;
    }
  }
  cout<<contador<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}