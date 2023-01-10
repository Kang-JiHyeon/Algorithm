#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  string result = "<";
  list<int> lis;
  list<int>::iterator iter = lis.begin();

  for (int i = 1; i <= n; i++)
    lis.push_back(i);

  while (!lis.empty())
  {
    for (int i = 0; i < k; i++)
    {
      if (++iter == lis.end())
        iter = lis.begin();
    }
    result += to_string(*iter) + ", ";
    iter = --lis.erase(iter);
  }
  result = result.substr(0, result.length() - 2) + ">";
  cout << result;
  return 0;
}