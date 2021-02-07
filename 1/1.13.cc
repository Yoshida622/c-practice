#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  
  int sum = 0, ans;
  
  for (int i = 0; i < N; i++) {
      cin >> vec.at(i);
      sum += vec.at(i);
  }
  
  ans = sum / N;
  
  for (int i = 0; i < N; i++) {
    if ((ans - vec.at(i)) >= 0){  
      cout << ans - vec.at(i) << endl;;
    }
    else {
        cout << vec.at(i) - ans << endl;; 
    }
  }
  
}
