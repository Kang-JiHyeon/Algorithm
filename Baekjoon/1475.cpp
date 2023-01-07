// https://www.acmicpc.net/problem/1475

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int arr[10] = {}, maxN = 0;
  string s;
  cin >> s;

  for (auto c : s)
  {
    int n = c - '0';
    arr[n]++;

    if (n == 6 || n == 9)
      continue;
    maxN = max(maxN, arr[n]);
  }

  cout << max(maxN, (arr[6] + arr[9] + 1) / 2);

  return 0;
}