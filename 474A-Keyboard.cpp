#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
string keyboard[3];
 
char finder(char ch, string x) {
 
  for(int i=0; i<3; i++) {
    for(int j=0; j<keyboard[i].size(); j++) {
        if(keyboard[i][j]==ch) {
            if(x=="R") return keyboard[i][j-1];
            else return keyboard[i][j+1];
        }
    }
  }
 
}
 
int main()
{
    ll n,t,i,j,k;
 
    keyboard[0]="qwertyuiop";
    keyboard[1]="asdfghjkl;";
    keyboard[2]="zxcvbnm,./";
    string shifting,typed;
    cin>>shifting>>typed;
 
    for(i=0; i<typed.size(); i++) {
        cout<<finder(typed[i],shifting);
    }
 
  //cout<<endl; main();
}
 