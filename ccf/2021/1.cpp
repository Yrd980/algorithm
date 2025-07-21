#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<int> histogram(l, 0);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      int pixel;
      cin >> pixel;
      histogram[pixel]++;
    }
  }

  for (int i = 0; i < l; ++i) {
    if (i != 0) {
      cout << " ";
    }
    cout << histogram[i];
  }

  return 0;
}
