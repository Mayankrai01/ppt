q1:
#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map <int,int> m;
            for(int i = 0;i < n1;i++) m[A[i]] = 1;
            for(int i = 0;i < n2;i++) if(m[B[i]]) m[B[i]] = 2;
            for(int i = 0;i < n3;i++) if(m[C[i]] == 2) m[C[i]] = 3;
            vector <int> ans;
            for(auto i:m) if(i.second == 3) ans.push_back(i.first);
            return ans;
        }

};
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
q2:
    vector<int> getElementsOnlyInFirstList(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> onlyInNums1;
        
        // Store nums2 elements in an unordered set. 
        unordered_set<int> existsInNums2;
        for (int num : nums2) {
            existsInNums2.insert(num);
        }
        
        // Iterate over each element in the list nums1.
        for (int num : nums1) {
            if (existsInNums2.find(num) == existsInNums2.end()) {
                onlyInNums1.insert(num);
            }
        }
        
        // Convert to vector.
        return vector<int> (onlyInNums1.begin(), onlyInNums1.end());
    }
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        return {getElementsOnlyInFirstList(nums1, nums2), getElementsOnlyInFirstList(nums2, nums1)};
    }
q3:

q4:
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans =0 , n=nums.size();
        for(int i=0;i<n;i+=2) ans+= nums[i];
        return ans;
    }
};
q5:
class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n>=i){
            n=n-i;
            i++;
        }
        return  i-1;
    }
};
  
