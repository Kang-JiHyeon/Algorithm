#include <iostream>
#include <stack>
using namespace std;

int main()
{
  int n;
  cin >> n;
  stack<int> st1, st2, st3;

  for (int i = 0, t; i < n; i++)
  {
    cin >> t;
    st1.push(t);
  }

  for (int i = 0, cur; i < n; i++)
  {
    if (!st1.empty())
    {
      cur = st1.top();
      st1.pop();
    }

    while (1)
    {
      if (st1.empty())
      {
        st2.push(0);
        break;
      }

      if (cur <= st1.top())
      {
        st2.push(st1.size());
        break;
      }
      else
      {
        st3.push(st1.top());
        st1.pop();
      }
    }

    while (!st3.empty())
    {
      st1.push(st3.top());
      st3.pop();
    }
  }
  while (!st2.empty())
  {
    cout << st2.top() << ' ';
    st2.pop();
  }
  return 0;
}

// 탑높이 스택과 수신 스택 생성
// 탑높이 스택에 탑 높이 차례대로 삽입
// 최상단 pop(=현재 탑높이)
// 현재 탑높이가 top값보다 작으면 탑높이 스택의 길이를 수신 스택에 push
// 현재 탑높이가 top값보다 크면 탑높이 스택 pop
// 4번 조건 만족할 때까지 반복
// 만약 탑높이 스택이 비어있다면 수신 스택에 0을 push
// 3~7과정을 n번 반복
// 수신 스택의 최상단값부터 출력
