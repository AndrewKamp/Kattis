#include<iostream>
#include<math.h>

using namespace std;


int main(int argc, char const *argv[]){

    int n, num, power = 0, tot = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        power = num%10;
        num /= 10;
        tot = tot + pow(num,power);
    }

    cout << tot << endl;

    return 0;
}