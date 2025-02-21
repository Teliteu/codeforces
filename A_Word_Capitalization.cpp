#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin>>str;
  string aa;
  vector <char> string(str.begin(),str.end());
  string[0]=toupper(string[0]);
  for(int i=0;i<string.size();i++){
    aa=aa+string[i];
  }
  cout<<aa;
}	