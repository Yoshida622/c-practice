// 空白用
vector<int> a = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
  cout << a.at(i);
  if (i == 4) {
    cout << endl; // 末尾なら改行
  }
  else {
    cout << " ";  // それ以外なら空白
  }
}