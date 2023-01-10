#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  list<int> lis;
  list<int>::iterator iter = lis.begin();

  cout << '<';
  for (int i = 1; i <= n; i++)
    lis.push_back(i);

  while (!lis.empty())
  {
    for (int i = 0; i < k; i++)
    {
      if (++iter == lis.end())
        iter = lis.begin();
    }
    cout << *iter;
    iter = --lis.erase(iter);

    if (lis.empty())
      cout << '>';
    else
      cout << ", ";
  }

  return 0;
}