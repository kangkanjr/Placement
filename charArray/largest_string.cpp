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

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char a[1000];
  char res[1000];

  int max_len = 0;

  int n;
  cin>>n;

  cin.get(); // for that first extra \n

  for(int i=0;i<n;i++){
    cin.getline(a,1000);

    if(strlen(a) > max_len){
      max_len = strlen(a);
      strcpy(res,a); // a to res;
    }
  }

  cout<<"Largest string: "<<res<<" of length: "<<strlen(res)<<endl;

  return 0;
}
