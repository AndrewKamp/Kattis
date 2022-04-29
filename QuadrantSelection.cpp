#include<iostream>

using namespace std;


int main(int argc, char const *argv[]){

    int x,y;
    cin >> x; cin >> y;
            //1/2       //3/4
    cout << (x > 0 ? (y > 0 ? ('1') : ('4')) : (y < 0 ? ('3') : ('2'))) << '\n';


    return 0;
}