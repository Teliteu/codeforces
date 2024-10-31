#include <bits/stdc++.h>
using namespace std;

void resolu() {
  vector <int> n(3);
  for (int i=0;i<3;i++){
    cin>>n[i];
  }
  sort(n.begin(), n.end());
  cout<<n[1]<<endl;
}
int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}