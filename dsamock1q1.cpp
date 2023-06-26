#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                nums.push_back(0);
                nums.erase(nums.begin() + i);
                n--;
                i--;
            }
        }
    }
};

template <typename T>
void printVector(const vector<T>& nums) {
    for (const T& num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;
    
    // Example usage

    int n;
    cin>>n;
    vector<int> nums (n);
    for(int i=0;i<n;i++) cin>>nums[i];
    
    cout << "Original vector: ";
    printVector(nums);
    
    solution.moveZeroes(nums);
    
    cout << "After moving zeroes: ";
    printVector(nums);
    
    return 0;
}
