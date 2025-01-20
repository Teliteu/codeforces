#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long a;
  cin>>a;
  if (a%2!=0){
    cout<<-1<<endl;
  }
  else{
    cout<<to_string(1)+" "+to_string(a/2)<<endl;
  }
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}