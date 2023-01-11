#include <iostream>
#include <stack>
using namespace std;

int main()
{
  ios::sync_with_stdio;
  cin.tie(0);

  int k, sum = 0;
  cin >> k;
  stack<int> st;

  while (k--)
  {
    int n;
    cin >> n;
    if (n)
      st.push(n);
    else
      st.pop();
  }

  while (!st.empty())
  {
    sum += st.top();
    st.pop();
  }

  cout << sum;

  return 0;
}