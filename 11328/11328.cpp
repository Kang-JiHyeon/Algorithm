/*
첫번째 문자열과 두번째 문자열을 구성하는 문자들이 같으면 성공

1. 문자가 나온 개수를 담을 정수 배열을 준비
2. 1번째 문자열을 읽고 문자에 해당하는 인덱스의 값 1 증가
3. 2번째 문자열을 읽고 문자에 해당하는 인덱스 1 감소
4. 정수 배열의 모든 값이 0이면 가능, 아니면 불가능 출력

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    int arr[26] = {};
    bool result = true;
    string s1, s2;
    cin >> s1 >> s2;

    for (auto c : s1)
      arr[c - 'a']++;

    for (auto c : s2)
      arr[c - 'a']--;

    for (auto a : arr)
    {
      if (a != 0)
        result = false;
    }

    if (result)
      cout << "Possible\n";
    else
      cout << "Impossible\n";
  }
  return 0;
}
