#include <iostream>

using namespace std;

int main()
{
    int v[100], n;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for(int i = 1; i <= n; i++)
        if(v[i] % 2 == 0)
            cout <<v[i] << " ";



    return 0;
}
