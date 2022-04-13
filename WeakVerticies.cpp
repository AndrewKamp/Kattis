#include <iostream>
#include <vector>
using namespace std;


void cleanMatrix(vector<vector<int>> &vertex, vector<int> &remain){
    vertex = {};
    remain = {};
}

void getMatrix(int n, vector<vector<int>> &vertex, vector<int> &remain){
    vector<int> tempv;
    int temp;
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> temp;
            tempv.push_back(temp);
            }
        vertex.push_back(tempv);
        tempv = {};
        }
}


void processMatrix(int n, vector<vector<int>> &vertex, vector<int> &remain){
    for(int vec = 0; vec < n; vec++){
        int flag = 1;
        //cout << "vec " << vec << endl;
        for(int j = 0; j < n; j++){
            if(vertex[vec][j]){
                for(int k = j+1; k < n; k++){
                    if(vertex[j][k]){
                        if(vertex[vec][k]){
                        //cout << "vertex[vec][k]:: " << vertex[vec][k]<<endl;
                        flag = 0;
                        }
                    }
                }
            }
        }
        if(flag){
           // cout << vec << endl;
           remain.push_back(vec);
        }
    }
}


void printVector(vector<int> &v){
    for(int j = 0; j < (int)v.size(); j++){
        cout << v[j] << " ";
        }
    cout << endl;
}


int main(int argc, char const *argv[])
{
    int n = 0;
    vector<vector<int>> vertex;
    vector<int> remain;
    while(n != -1){
        cin >> n;
        cleanMatrix(vertex,remain);
        getMatrix(n,vertex, remain);
        processMatrix(n,vertex,remain);
        printVector(remain);
    }
    return 0;
}
