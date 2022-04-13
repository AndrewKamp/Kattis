#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int d,m; cin >> d >> m;

    /*
    sun - 1
    mon - 2
    tue - 3
    wed - 4
    thur - 5
    fri - 6
    sat - 7
    */
    int monthStart[] = {5,1,1,4,6,2,4,7,3,5,1,3};
    const char *dayName[7] = { "Sunday" ,"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int factor = d%7;
    if(!factor){d = 7;}
    if (d != 7){d = (d%7)-1;}else{ d = d -1;}
    d = (monthStart[m-1] + d);
    while(d>7){
        d = d%7;
    }
    cout << dayName[d-1] << endl;
    return 0;
}
