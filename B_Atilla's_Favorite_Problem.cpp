#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int n;
  cin>>n;
  string str;
  cin>>str;
  sort(str.begin(), str.end());
  char b[n];
  for (int i=0;i<n;i++) {
    b[i] = str[i];
  }
  string alf("abcdefghijklmnopqrstuvwxyz");
  char a[26];
  for (int i=0;i<26;i++) {
    a[i] = alf[i];
  }
  for (int i=0;i<26;i++) {
    if (b[n-1] == a[i]){
      cout <<i+1<<endl;
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