#include <bits/stdc++.h>
using namespace std;

void resolu() {
  vector <long long> infos(2);
  for (long long i=0;i<2;i++){
    cin>>infos[i];
  }
  long long qmons=infos[0];
  long long atkgeno=infos[1];
  vector< pair <long ,long>> vect;
  vector <long long> vidamons(qmons);
  vector <long long> atkmons(qmons);
  for (long long i=0;i<qmons;i++){
    cin>>vidamons[i];
  }
  for (long long i=0;i<qmons;i++){
    cin>>atkmons[i];
  }
  for (long long i=0; i<qmons; i++){
    vect.push_back( make_pair(atkmons[i],vidamons[i]));
  }
  sort(vect.begin(), vect.end());
  long long tem2=0;
  long long j=0;
  long long sim=0;
  long long aa=0;
  for (int i=0;i<qmons;i++){
    vect[i].second=vect[i].second-j;
    while(vect[i].second>0){
      if (aa!=0){
        atkgeno=atkgeno-vect[i].first;
      }
      if (atkgeno<=0 && vect[i].second>0){
        sim=1;
        break;
      }
      vect[i].second=vect[i].second-atkgeno;
      j=j+atkgeno;
      if (vect[i].second<=0){
        aa=1;
        break;
      }
      else{
        atkgeno=atkgeno-vect[i].first;
        aa=0;
      }
    }
    if (sim==1){
      break;
    }
  }
  if (sim==1){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}