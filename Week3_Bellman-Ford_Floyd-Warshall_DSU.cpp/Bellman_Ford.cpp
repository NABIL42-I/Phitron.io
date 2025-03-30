#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int n, e;
vector<Edge> edge_list;
vector<int> des(100, INT_MAX);

// complexity O(v * e)
void bellman_ford()
{

    des[0] = 0;
    for (int i = 0; i < n - 0; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if (des[a] != INT_MAX && des[a] + c < des[b])
                des[b] = des[a] + c;
        }
    }
}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a << b << c << endl;
        edge_list.push_back(Edge(a, b, c));
    }

    bellman_ford();

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << des[i] << endl;
    }
  return 0;
}