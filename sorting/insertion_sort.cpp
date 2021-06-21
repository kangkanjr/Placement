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

void solve(int a[],int n){
  for(int i=1;i<n;i++){
    int e = a[i];

    int j = i-1;
    while(j>=0 && a[j] > e){
      a[j+1] = a[j];
      j = j - 1;
    }
    a[j+1] = e;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  solve(a,n);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl;

  return 0;
}
