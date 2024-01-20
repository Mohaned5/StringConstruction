 #ifndef STRINGCONSTRUCTION_H
#define STRINGCONSTRUCTION_H

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using std::string;
using namespace std;

//stores the minimum cost to construct the substring at each index (0 to index)
unordered_map<int, int> dp;
string target;
int appendCost, cloneCost;

/* Finds the longest substring that can be cloned*/
int maxCloneLength(int index) {
    int maxLength = 1;
    int curCount = 0;
    int rightIndex = 0;
    string right = target.substr(index, (target.size()-index+1));
    for (int i = 0; i < index ;i++){
        if (target[i] == right[rightIndex]){
            curCount ++;
            rightIndex ++;
            maxLength = max(curCount, maxLength);
        }

        else{
            if (maxLength > index - i){
                break;
            }
            rightIndex = 0;
            curCount = 0;
            if (target[i] == right[rightIndex]){
                curCount ++;
                rightIndex ++;
            }
        }
    }
    return maxLength;
}

/* Appends the minimum cost*/
int minCost(int index) {

    if (target.size() == index) {return 0;}
    if (dp[index]) {return dp[index];}
    int cloneupdate = cloneCost + minCost(index + maxCloneLength(index));
    int appendupdate = appendCost + minCost(index + 1);
    int update = min(cloneupdate, appendupdate);
    dp[index] = update;
    return update;
}

/* Takes the target string, the clone cost, and the append cost 
and returns the cheapest way of making the target string. */
int stringConstruction(string targett, int copyCost, int appendcost) {
    dp.clear();
    target = targett;
    cloneCost = copyCost;
    appendCost = appendcost;
    return minCost(0);
}


#endif