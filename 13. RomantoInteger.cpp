#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
    
        int result = mp[s[s.length()-1]];
        for(int i=s.length()-2; i>=0; i--){
            if(mp[s[i]]>mp[s[i+1]]){
                result = result + mp[s[i]];
            }
            else if(mp[s[i]] == mp[s[i+1]]){
                result = result + mp[s[i]];
            }
            else{
                result = result - mp[s[i]];
            }
        }
        return result; 
        
    }
};

int main()
{
    char romanNumber[15];
    cout<<"Enter a string\n";
    cin>>romanNumber;
    Solution obj;
    int integerNumber = obj.romanToInt(romanNumber);
    cout<<integerNumber;
    
    return 0;
}