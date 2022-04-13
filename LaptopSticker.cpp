#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int wc,hc,ws,hs; cin >> wc >> hc >> ws >> hs;
    cout << (((wc-1) > ws && ((hc-1) > hs)) ? "1\n" : "0\n");
    return 0;
}
