#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//Definition Section
//--------------------------------------------------------------
#define fl(i,x,y) for(int i=x; i<y; i++)
#define flc(i,x,y,z) for(int i=x; i<y; i+=z)
#define nl cout<<endl
#define vsort(v) sort(v.begin(), v.end());
#define vsortg(v) sort(v.begin(), v.end(), greater<int>());
#define all(x) x.begin(),x.end()
#define pb push_back
#define printvc(v) for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
#define strTOint(s,n) {stringstream sst; sst<<s; sst>>n;}
#define intTOstr(n,s) {stringstream sst; sst<<n; sst>>s;}
#define fr first
#define sc second
//--------------------------------------------------------------



int main()
{
    ll n,m,t,i,j,k,x,y,z,a,b,c,cnt=0,ans=0;
    bool flag=false;
    string s1,s2,s3;

    cin>>t;

    while(t--)
    {
        pair<ll,ll> cor[2];
        cin>>n;
        string s[n];

        k=0;
        //finding co-ordinate
        fl(i,0,n)
        {
            cin>>s[i];
            fl(j,0,s[i].size())
            {
                if(s[i][j]=='*')
                {
                    cor[k]=make_pair(i,j);
                    k++;
                }

            }

        }

//        cout<<"Pairs"<<endl;
//
//        cout<<cor[0].first<<" "<<cor[0].second<<endl;
//        cout<<cor[1].first<<" "<<cor[1].second<<endl;


        if(cor[0].first!=cor[1].first && cor[0].second!=cor[1].second) {
            s[cor[0].first][cor[1].second] = '*';
            s[cor[1].first][cor[0].second] = '*';
        }
        else if(cor[0].second==cor[1].second){
            k=cor[0].second+1;
            if(k>n-1) k-=2; //cout<<"k= "<<k<<endl;
            s[cor[0].first][k]='*';
            s[cor[1].first][k]='*';
        }
        else if(cor[0].first==cor[1].first) {
            k=cor[0].first+1;
            if(k>n-1) k-=2;
            s[k][cor[0].second]='*';
            s[k][cor[1].second]='*';
        }

         fl(i,0,n) cout<<s[i]<<endl;


    }

    //cout<<endl; main();
}


