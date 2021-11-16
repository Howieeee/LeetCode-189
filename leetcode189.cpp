class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(k==0 || k==nums.size())
            return;
        while(k>nums.size())
            k-=nums.size();
        
        reverse(nums.begin(),nums.end());//先翻過來
        //k就是前幾個
        auto r_k = nums.begin() + k;
        reverse(nums.begin(),r_k);
        
        //k以後也要翻轉
        reverse(r_k,nums.end());
       
        
    }
};
