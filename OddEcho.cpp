#include <iostream>
#include <string>
#include <vector>

//g++ -Wall -g -sdt=c++17 OddEcho.cpp -o test
using namespace std;

void prinfVectorOdd(vector<string> v){
    for(int i=0; i < int(v.size()); i=i+2)
        cout<<v[i]<<endl;
    cout<<"\n";
}

void getMultiLine(vector<string> &lines){
    string line;
    getline(cin,line);
    int numLines = stoi(line);

    for(int i = 0; i<numLines; i++){
        getline(cin,line);
        if(!line.empty()){
            lines.push_back(line);
        }
    }
}


int main(int argc, char const *argv[])
{
    vector<string> userInput;
    getMultiLine(userInput);
    prinfVectorOdd(userInput);

    return 0;
}
