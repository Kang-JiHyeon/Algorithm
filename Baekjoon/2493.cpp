#include <iostream>
#include <stack>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  // 높이, 순서 쌍을 값으로 가지는 스택 선언
  stack<pair<int, int>> st;
  // 스택 초기값 삽입
  st.push({100000001, 0});

  for (int i = 1; i <= n; i++)
  {
    // 현재 탑 높이를 입력받는다.
    int h;
    cin >> h;

    // 현재 탑 높이보다 큰 높이를 가지는 탑을 찾고 싶다.
    // 현재 탑 높이보다 이전 탑의 높이가 작을 때까지 직전의 값을 삭제
    while (h > st.top().first)
      st.pop();
    // 현재 탑 높이보다 큰 탑을 찾았으니 출력
    cout << st.top().second << ' ';
    // 현재 탑 높이와 순서의 쌍을 스택에 삽입
    st.push({h, i});
  }
  return 0;
}
