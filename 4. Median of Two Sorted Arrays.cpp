#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> temp(m+n);
        if(m == 0){
            temp = nums2;
        }
        else if(n==0){
             temp = nums1;
            
        }

        else if(m !=0 && n !=0){
            int i = 0;
            int j = 0;
            int k = 0;
            while(k<(m+n)){
                if(i==m){
                    while(j<n){
                        temp[k] =  nums2[j];
                        k++;
                        j++;

                    }
                }
                else if(j == n){
                    while(i<m){
                        temp[k] =  nums1[i];
                        k++;
                        i++;

                    }
                }
                else if(nums1[i]<=nums2[j]){
                    temp[k] = nums1[i];
                    i++;
                    k++;
                }
                else if(nums1[i]>=nums2[j]){
                    temp[k] = nums2[j];
                    j++;
                    k++;
                }
            }           
                
        }
        
        for(int l=0; l<m+n; l++){
            cout<<temp[l]<<' ';
        }
        int merged_len = temp.size();
        cout<<'\n'<<merged_len<<'\n';

        double median;
        if((merged_len % 2) == 1){
            int mid = merged_len/2;
            median  = (double)temp[mid];
        }
        else if(merged_len%2 == 0){
            int mid2 = merged_len/2;
            int mid1 = mid2 -1;
            int sum = (double)(temp[mid1]+temp[mid2]);
            median  = (double)sum/(double)(2*1.0);
        }
        return median;

        
    
    }
};

int main()
{
    vector<int> n1 = {1};
    vector<int> n2 = {2};
    Solution solution = Solution();
    double median = solution.findMedianSortedArrays(n1,n2);
    cout<<median;
    return 0;
}
