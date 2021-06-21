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

  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[j] < a[i]){
        swap(a[i],a[j]);
      }
    }
  }

  cout<<"a: ";
  for(auto z: a)
    cout<<z<<" ";
  cout<<endl;

  return 0;
}
