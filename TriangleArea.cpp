#include <iostream>
#include <vector>
#include <string>
using namespace std;

//function to split single line inputs into members of an input array
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

float triangleAB(vector<string> v){
    float a = stof(v[0]);
    float b = stof(v[1]);
    float x = (a * b)/2;
    return x;
}

int main(int argc, char const *argv[])
{
    //Variables to store input information
    string userInput;
    vector<string> v;

    //get the one line input of two numbers
    getline(cin,userInput);

    //seperate the single line input into seprate members if there is a space between them
    stringSplitBySpace(userInput,v);

    cout << triangleAB(v) << endl;

    return 0;
}
