#include <bits/stdc++.h>
using namespace std;

void resolu() {
  string str;
  cin>>str;
  int sum=0;
  char aa;
  int bb;
  vector <char> b(str.begin(), str.end());
  for (int i=0;i<3;i++){
    aa=b[i];
    bb=(int)aa-48;
    sum=sum+bb;
  }
  cout<<sum+5<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}