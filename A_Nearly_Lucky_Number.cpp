#include <bits/stdc++.h>
using namespace std;

int main(){ 
  string s;
  cin>>s;
  long long k=0;
  for(long long i=0; i<s.size(); i++){
    if(s[i]=='4' or s[i]=='7')
      k++;
  }
  if(k==4 or k==7){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}