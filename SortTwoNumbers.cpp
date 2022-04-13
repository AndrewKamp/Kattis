#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    a < b ? (cout << a << " " << b << "\n") : (cout << b << " " << a << "\n");

    return 0;
}
