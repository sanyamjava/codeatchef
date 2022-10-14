#include <bits/stdc++.h> 
#include<climits>
#define ll long long int
using namespace std;
int get_second(pair<ll,ll> l)
{
    return l.second;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 int t;
 cin>>t;
 while(t--)
 {
     ll n,m;
     cin>>n>>m;
     ll x,y;
     map<ll,ll> mp;
     map<ll,ll> mx;
     map<ll,ll> fmp;
     map<ll,vector<ll>> gp;
     map<ll,vector<ll>> gx;
     ll minn=LLONG_MAX;
     ll maxx=LLONG_MIN;
     vector<ll> vp;
     ll d;
     while(m--)
     {
         cin>>x>>y;
         mp[x]++;
         mp[y]++;
         gp[x].push_back(y);
         gp[y].push_back(x);
     }
     vector<int> vx(mp.size());
        transform(mp.begin(), mp.end(), vx.begin(), get_second);
        sort(vx.begin(),vx.end());
        ll size=vx.size();
        for(ll i=size;i>0;i--)
            mx[i]=vx[size-i];
        for(auto &p : mp)
        {
            for(auto &q : mx)
            {
                if(p.second==q.second)
                {
                    fmp[p.first]=q.first;
                    mx.erase(q.first);
                    break;
                }
            }
        }
        for(auto &p : gp)
        {
            for (auto &s : p.second)
            {
                gx[fmp[p.first]].push_back(fmp[s]);
            }
        }
     for(const auto &p : gx)
        {
            d=0;
            for ( const auto &s : p.second )
            {
                if(p.first>s)
                    d+=1;
            }
            if(maxx<d)
                maxx=d;
            if(minn>d)
                minn=d;
        }
        cout<<maxx-minn<<endl;
        for ( const auto &p :fmp)
        {
            cout<<p.second<<" ";
        }
        cout << endl;
 }
 return 0;
}
