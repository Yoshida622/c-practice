#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x;
  cin >> x;
 
  if (x < 10) {
    cout << "xは10より小さい" << endl;
  }
 
  cout << "終了" << endl;
}

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x;
  cin >> x;
 
  if (x < 10) {
    cout << "xは10より小さい" << endl;
  }
  else if (x > 20) {
    cout << "xは10より小さくなくて、20より大きい" << endl;
  }
  else if (x == 15) {
    cout << "xは10より小さくなくて、20より大きくなくて、15である" << endl;
  }
  else {
    cout << "xは10より小さくなくて、20より大きくもなくて、15でもない" << endl;
  }
}

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "+") {
    cout << A + B << endl;
  }
  else if (op == "-") {
    cout << A - B << endl;
  }
  else if (op == "*") {
    cout << A * B << endl;
  }
  else if (op == "/") {
    if (B == 0) {
      cout << "error" << endl;
    }
    else {
      cout << A / B << endl;
    }
  }
  else {
    cout << "error" << endl;
  }
}