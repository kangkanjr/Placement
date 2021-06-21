#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ull = unsigned long long int;
#define endl '\n'

#define mod 1000000007 //1e9+7
#define inf INT_MAX
#define infx LLONG_MAX // 1e18

#define pb push_back
#define fi first
#define se second

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k;
  cin>>n>>k;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int i=0, j= n-1;

  int ans = 0;

  while(i<j){
    if(a[i] + a[j] == k){
      ans++;
      i++;
      j--;
    }
    else if(a[i] + a[j] < k)
      i++;
    else
      j--;
  }

  cout<<ans<<endl;

  return 0;
}
