#include "bits/stdc++.h"
using namespace std;
#define int long long

void solve(){
  int n,k;cin>>n>>k;
  vector<int> v(n);
  int mx=INT_MIN,mxi=-1;
  vector<int> ind;
  for(int i=0;i<n;i++){
    cin >> v[i];
    if(v[i]>mx){
      mx=v[i];
      mxi=i;
    }
  }

  for(int i=0;i<n;i++){
    if(v[mxi]==v[i]){
      ind.push_back(i);
    }
  }


  int cnt=0;
  for(int idx:ind){
    int vd=idx-k+1;
    if(vd >=0){
      cnt += ((n-idx))?(n-idx):1;
    } 
  }

  cout << cnt << endl;



}

signed main() 
{ 
   ios::sync_with_stdio(0); 
   cin.tie(0);cout.tie(0);
   int T=1;
   cin >> T; 
   while (T--) { 
       solve();
   } 
   return 0; 
}
