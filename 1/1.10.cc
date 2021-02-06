// 「N回処理する」というプログラムを書く場合、次のように「iを0からはじめ、iがNより小さいときにループする」という形式で書くのが一般的です。
#include <bits/stdc++.h>
using namespace std;

int main() {

  // iを0からはじめる
  int i = 0;

  // iが5未満の間ループ
  while (i < 5) {
    cout << "Hello" << endl;
    i++;
  }

}
