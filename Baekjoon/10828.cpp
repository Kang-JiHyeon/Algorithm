#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  stack<int> st;
  int n;
  cin >> n;
  while (n--)
  {
    string c;
    cin >> c;
    int result;

    if (c == "push")
    {
      int k;
      cin >> k;
      st.push(k);
      continue;
    }
    else if (c == "pop")
    {
      if (st.empty())
        result = -1;
      else
      {
        result = st.top();
        st.pop();
      }
    }
    else if (c == "size")
      result = st.size();
    else if (c == "empty")
      result = st.empty() ? 1 : 0;
    else if (c == "top")
      result = st.empty() ? -1 : st.top();

    cout << result << '\n';
  }
  return 0;
}