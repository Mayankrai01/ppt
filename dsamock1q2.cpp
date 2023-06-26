#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char& c : s) {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    
    // Example usage
    string s;
    cin >>s;
    
    int index = solution.firstUniqChar(s);
    
    cout << "Index of the first unique character: " << index << endl;
    
    return 0;
}
