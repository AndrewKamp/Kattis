#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int width, pieces, x, y, area = 0, length;

    cin >> width >> pieces;
    for( int i = 0; i < pieces; i++){
        cin >> x >> y;
        area += x*y;
    }
    length = area/width;
    cout << length << "\n";
    return 0;
}
