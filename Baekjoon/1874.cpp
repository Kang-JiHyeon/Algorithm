#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
  ios::sync_with_stdio;
  cin.tie(0);

  int n, k = 0;
  cin >> n;
  stack<int> st;
  string answer = "";

  // 길이가 n인 수열의 i번째 수와 비교
  for (int i = 0, j; i < n; i++)
  {
    cin >> j;

    // k부터 입력받은 값까지 k를 1씩 증가시키면서 stack에 push
    while (k < j)
    {
      st.push(++k);
      answer += "+\n";
    }

    // 스택이 비어있지 않고
    if (!st.empty())
    {
      // 스택의 최상단 값이 입력받은 값과 같다면 pop
      if (st.top() == j)
      {
        answer += "-\n";
        st.pop();
      }
      // 스택의 최상단 값이 입력받은 값과 다르다면 NO
      else
      {
        answer = "NO";
        break;
      }
    }
  }
  // 결과값 출력
  cout << answer;
  return 0;
}