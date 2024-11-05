#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int size;
  string str1;
  string str2;
  cin>>str1;
  size=str1.size();
  vector <char> s1(str1.begin(), str1.end());
  for (int i=size-1;i>-1;i--){
    str2=str2+s1[i];
  }
  //str1=str1+s1[0]+str2;
  cout<<str1+str2<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}