class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
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
        for(int k=0; k<m+n; k++){
                nums1[k] = temp[k];
            }
        
    
    }
};
