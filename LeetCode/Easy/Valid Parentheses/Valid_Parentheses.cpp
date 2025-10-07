#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> pairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
            // If c is a closing bracket
            if (pairs.count(c)) {
                // Pop top element from stack or use dummy if empty
                char top = stk.empty() ? '#' : stk.top();
                stk.pop();

                // If top doesn't match corresponding opening bracket, invalid
                if (top != pairs[c]) {
                    return false;
                }
            } else {
                // Push opening brackets
                stk.push(c);
            }
        }

        // If stack empty, all brackets matched correctly
        return stk.empty();
    }
};
