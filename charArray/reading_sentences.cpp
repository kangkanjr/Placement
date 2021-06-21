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

void readline(char a[], int len, char delim ='\n'){ // delim by default '\n'

  int i = 0;
  char ch = cin.get(); // this reads all characters inculding, white spaces and new line('\n')
  while(ch != delim){
    a[i] = ch;
    i++;
    if(i == len - 2)
      break;
    ch = cin.get();
  }

  a[i] = '\0'; // add null at the end
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char a[1000];

  // reading using our function
  //readline(a,1000,'$');

  //the inbuilt one
  cin.getline(a,1000,'$'); // by default end at a new line

  cout<<a<<endl;
  return 0;
}
