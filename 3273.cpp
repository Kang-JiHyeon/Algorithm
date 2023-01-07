#include <iostream>
using namespace std;

int arr[1000001];
int occer[2000001];
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x, cnt = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> x;

  for (int i = 0; i < n; i++)
  {
    // x보다 수열의 값이 작고, 이전에 x-arr[i]가 등장했으면 cnt 증가
    if (x - arr[i] > 0 && occer[x - arr[i]])
      cnt++;
    // 등장 배열 업데이트
    occer[arr[i]] = 1;
  }

  cout << cnt;
  return 0;
}