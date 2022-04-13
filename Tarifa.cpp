#include <iostream>
#include <vector>
#include <string>
using namespace std;

void getMultiLineInt(int numLines, vector<int> &lines){
    int x;
    for(int i = 0; i<numLines; i++){
        cin >> x;
        lines.push_back(x);
        }
}

int processData(int monthlyLimit, vector<int> monthlyUsage){
    int rollover = 0, totalCanBeUsed;
    for(int i = 0; i < int(monthlyUsage.size()); i++){
        rollover += monthlyLimit - monthlyUsage[i];
    }
    totalCanBeUsed = monthlyLimit + rollover;
    return totalCanBeUsed;
}

int main(int argc, char const *argv[])
{

    //baseInfo will store the megsPerMonth and numOfMonths
    vector<int> baseInfo;
    vector<int> v;

    getMultiLineInt(2,baseInfo);
    getMultiLineInt(baseInfo[1],v);

    int ans = processData(baseInfo[0], v);
    cout << ans << endl;

    return 0;
}
