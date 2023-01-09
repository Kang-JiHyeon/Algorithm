#include <iostream>
#include <list>
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
    list<char> lis;
    list<char>::iterator iter = lis.begin();
    string s;
    cin >> s;

    for (auto c : s)
    {
      if (c == '-')
      {
        if (iter != lis.begin())
          iter = lis.erase(--iter);
      }
      else if (c == '<')
      {
        if (iter != lis.begin())
          iter--;
      }
      else if (c == '>')
      {
        if (iter != lis.end())
          iter++;
      }
      else
        lis.insert(iter, c);
    }
    for (auto a : lis)
      cout << a;
    cout << '\n';
  }
  return 0;
}