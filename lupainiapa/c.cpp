#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = n - 1 ; i > -1; i--)
  {

    cout << a[i];

    if (i > 0)
    {
      cout << ",";
    }
    
  }
  
  
  return 0;
}