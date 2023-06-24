q1 :
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])==mp.end()){
                mp[nums[i]]=i;
            }
            else return {mp[target-nums[i]],i};
        }
        return {};
    }
};

q2 :
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[count++]=nums[i];
            }
        }
        return count; 
    }
};
q3:
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s =0 , e = nums.size()-1;
        while(s<=e){
            int m = s + (e-s)/2;
            if(nums[m]== target){
                return m;
            }
            else if(nums[m] > target){
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        return s;
    }
};
q4 :
class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                v[i]++;
            if(v[i] == 10){
                v[i] = 0;
                if(i != 0){
                    v[i-1]++;
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};
q5 :
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = nums1.size() , n2 = nums2.size();
        for(int i=m;i<n1;i++) nums1[i] = nums2[i-m];
        int left = 0, right = m;
        vector<long long> temp;
        while(left<m && right <n1){
            if(nums1[left]<=nums1[right]){
                temp.push_back(nums1[left]);
                left++;
            }
            else{
                temp.push_back(nums1[right]);
                right++;
            }
        }
        while(left<m){
            temp.push_back(nums1[left++]);
        }
        while(right<n1){
            temp.push_back(nums1[right++]);
        }
        for(int i=0;i<n1;i++) nums1[i]=temp[i];
    }
};
q6 :
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};
q7 :
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums.push_back(0);
                nums.erase(nums.begin()+i);
                n--;
                i--;
            }
        }
    }
};
q8:
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int duplicate=0 , missing  =0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i])!=st.end()){
                duplicate = nums[i];
            }
            else st.insert(nums[i]);
        }
        for(int i =0 ;i<n;i++){
            if(st.find(i+1)==st.end()) {
                missing = i+1;
                break;
            }
        }
        return {duplicate,missing};
    }
};
