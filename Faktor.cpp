#include<iostream>

using namespace std;


int main(int argc, char const *argv[]){

    int numofArticles, impactReq;
    cin >> numofArticles >> impactReq;
    cout << (numofArticles * (impactReq - 1)) + 1 << '\n';

    return 0;
}