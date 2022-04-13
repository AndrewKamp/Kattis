#include <iostream>
#include <string>
#include <vector>

//g++ -Wall -g -sdt=c++17 WhichIsGreater.cpp -o test
using namespace std;


void stringSplitBySpace(string stringPass, vector<string> &v){
    string current_parse = "";

    for(int i=0; i<int(stringPass.length()); i++){
        if(stringPass[i] == ' '){
            v.push_back(current_parse);
            current_parse = "";
        }
        else{
            current_parse.push_back(stringPass[i]);
        }
    }

    v.push_back(current_parse);

}

void prinfVector(vector<string> v){
    for(int i=0; i < int(v.size()); i++)
        cout<<v[i]<<endl;
    cout<<"\n";
}

int compareAB(vector<string> v){
    double a = stod(v[0]);
    double b = stod(v[1]);
   int x = a > b ? 1 : 0;
   return x;
}

int main(int argc, char const *argv[])
{
    string userInput;
    vector<string> v;
    getline(cin,userInput);
    stringSplitBySpace(userInput,v);
    cout << compareAB(v) << endl;

    return 0;
}
