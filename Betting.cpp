#include<iostream>


using namespace std;


int main(int argc, char const *argv[]){

    double percentOptOne, percentOptTwo; 
    
    cin >> percentOptOne;  percentOptOne /= 100; 
    percentOptTwo = 1 - percentOptOne;

    cout << fixed;
    cout << 1/percentOptOne << '\n';
    cout << 1/percentOptTwo << '\n';

    return 0;
}