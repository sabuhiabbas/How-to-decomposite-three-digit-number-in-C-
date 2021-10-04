#include <bits/stdc++.h>

using namespace std;

int main() {
  char n[5];

  cin.getline (n, 5);

  if(n[0] != '-'){
    cout << n[0] << endl;
    cout << n[1] << endl;
    cout << n[2] << endl;
  }

  else if(n[0] == '-'){
    cout << n[1] << endl;
    cout << n[2] << endl;
    cout << n[3] << endl;
  }

  return 0;
}

