#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {

    public:
    vector<int> twoSum(vector<int>& nums, int target){
        int a=0;
        int b=0;
        for(int i=0; i< nums.size()-1; i++){
           for(int j=i+1; j<nums.size(); j++){
               if(nums[i]+nums[j]==target){
                   a=i;
                   b=j;
                   break;
                  
               }
           }
           if(a!=0 && b!=0){
               break;
           }
        }
        return {a,b};
    }   
};

int main()
{
    int i,a,n,target;
    cout<<"Enter number ofelement\n";
    cin>>n;
    vector<int> v;
    cout<<"Enter the element of vector ";
    
    for(i=1; i<=n; i++){
        cin>>a;
        v.push_back(a);
    }
    
    cout<<"Enter target: ";
    cin>>target;
    
    

    
    Solution obj;
    vector<int> result = obj.twoSum(v,target);
    cout<<"["<<result[0]<<","<<result[1]<<"]";
    

    return 0;
}