#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "i is ";
    cin >> i;

    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
