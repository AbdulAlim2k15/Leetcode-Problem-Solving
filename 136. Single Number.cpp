#include<iostream>
#include<vector>
#include<set>
using namespace std;

int singleNumber(vector<int> &nums){
    set<int> s(nums.begin(), nums.end());
    int vectorSum =0;
    for(int x:nums){
        vectorSum+=x;
    }

    int setSum = 0;
    for(int y:s){
        setSum += y;
    }
    
    return 2*setSum-vectorSum;
}
int main(){
    // Vector
    vector<int> vec = {2};
 
    // Convert Vector to Set
    int result = singleNumber(vec);
    cout<<result;
    
 
    return 0;
}