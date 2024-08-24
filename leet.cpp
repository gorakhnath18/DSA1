class Solution {
public:
    string nearestPalindromic(string n) {
        int len = n.size();
        if (n == "1") return "0";
        
         long long num = stoll(n);
        
         long long prefix = stoll(n.substr(0, (len + 1) / 2));
        
         vector<long long> candidates;
        
         candidates.push_back(getPalindrome(prefix, len % 2 == 0));
        candidates.push_back(getPalindrome(prefix - 1, len % 2 == 0));
        candidates.push_back(getPalindrome(prefix + 1, len % 2 == 0));
         candidates.push_back((long long)pow(10, len - 1) - 1);   
        candidates.push_back((long long)pow(10, len) + 1);           
        
         long long closest = -1;
        for (long long candidate : candidates) {
            if (candidate != num) {
                if (closest == -1 || abs(candidate - num) < abs(closest - num) ||
                    (abs(candidate - num) == abs(closest - num) && candidate < closest)) {
                    closest = candidate;
                }
            }
        }
        
        return to_string(closest);
    }

private:
    long long getPalindrome(long long prefix, bool isEven) {
        string s = to_string(prefix);
        string rs = string(s.rbegin(), s.rend());
        return stoll(isEven ? s + rs : s + rs.substr(1));
    }
};
