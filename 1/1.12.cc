#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
 
  // ここにプログラムを追記
  int count = 0, sum = 0, a;
  a = S.size() / 2 + 1;
  
  for (int i = 0; i < S.size(); i++) {
      if (S.at(i) == '-') {
          count++;
      }
      else if (S.at(i) == '+'){
          sum++;
      }
  }
  
  cout << 1 + sum - count << endl;
  
}