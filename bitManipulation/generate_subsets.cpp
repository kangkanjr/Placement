#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ull = unsigned long long int;
//#define endl '\n'

#define mod 1000000007 //1e9+7
#define inf INT_MAX
#define infx LLONG_MAX // 1e18

#define pb push_back
#define fi first
#define se second

void filterChars(int n,char a[]){
  int j = 0;

  while(n>0){
    if(n&1)
      cout<<a[j];
    j++;
    n = n>>1;
  }
  cout<<endl;
}

void printSubsets(char a[]){
  int n = strlen(a);

  for(int i=0;i<(1<<n);i++)
    filterChars(i,a);

  return;
}

int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);

  char a[100];
  cin>>a;

  printSubsets(a);

  return 0;
}
