#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long n=0;
  cin>>n;
  vector< pair <long long,long long>> vect;
  vector <long long> a(n);
  vector <long long> aa(n);
  for (long long i=0;i<n;i++){
    if (i==0){
      aa[i]=1;
    }
    cin>>a[i];
    aa[i]=aa[i]+1;
  }
  for (long long i=0; i<n; i++){
    vect.push_back(make_pair(a[i],aa[i]));
  }
  long long oi=0;
  sort(vect.begin(), vect.end());
  while(vect[n-2].first!=1){
    for (long long i=0;i<n;i++){
      oi=vect[n-1].first*vect[n-2].first;
      vect[n-1].first=oi;
      vect[n-2].first=1;
      sort(vect.begin(), vect.end());
      oi=0;
      if (vect[n-2].second==1){
        break;
      }
    }
  }
  long long soma=0;
  for (long long i=0; i<n; i++){
    soma=soma+vect[i].first;
  }
  soma=soma*2022;
  cout<<soma<<endl;
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}