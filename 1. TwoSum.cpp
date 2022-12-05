#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {

    public:
    vector<int> twoSum(vector<int>& nums, int target){
        
        vector<int> v1;
        map<int,int> mp;
        int index = 0;
        
        for(auto i=nums.begin(); i != nums.end(); i++){
            int counter=0;
            for(int j=0; j<mp.size(); j++){
                if(*i == mp[j]){
                    counter++;
                    if(index < j){
                        v1 = {index,j};
                        
                    }
                    else{
                        v1 = {j,index};
                    }
                    break;
                }
            }
            if(counter==1){
                break;
            }
            else{
                int diff = target - *i;
                mp[index] = diff;
                index++;
            }
        }
            
        return v1;    
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