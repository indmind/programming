#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  for (int i = N; i > 0; i--)
  {
    if(N % i == 0) {
      cout << i << "\n";
    }
  }
  
  return 0;
}