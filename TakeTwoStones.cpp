#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    (x % 2 == 0) ? (cout << "Bob" << endl) : (cout << "Alice" << endl);
    return 0;
}
