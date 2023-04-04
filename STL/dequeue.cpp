#include <bits/stdc++.h>
using namespace std;
int main()
{

    deque<int> d; // it is a double ended queue in which we can insert or delete element from both end
    for (int i = 0; i < 5; i++)
    {
        d.push_back(i);
    }
    for (int i = 6; i < 10; i++)
    {
        d.push_front(i);
    }
    cout << d.size() << endl;
    cout << d.front() << endl;
    cout << d.back();
}