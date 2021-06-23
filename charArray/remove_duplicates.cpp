#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
#define endl '\n'

#define mod 1000000007 //1e9+7
#define inf INT_MAX
#define infx LLONG_MAX // 1e18

#define pb push_back
#define fi first
#define se second

void solve(char a[]){
  int l = strlen(a);

  int prev = 0;

  for(int curr = 1;curr<l;curr++){
    if(a[prev] != a[curr]){
      prev++;

      a[prev] = a[curr];
    }
  }

  a[++prev] = '\0';

}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char a[1000];
  cin>>a;

  solve(a);

  cout<<a<<endl;

  return 0;
}
