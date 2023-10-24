class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;
        unordered_map<char, int> mpp;

        // Count the frequency of characters in string p
        for (char i : p) mpp[i]++;

        int n = s.size();
        int k = p.size();

        int i = 0;
        int j = 0;
        int count = mpp.size();

        while (j < n) {
            char ch = s[j];

            if (mpp.find(ch) != mpp.end()) {
                mpp[ch]--;

                if (mpp[ch] == 0) {
                    count--;
                }
            }

            // Slide the window
            while (count == 0) {
                if (j - i + 1 == k) {
                    ans.push_back(i);
                }

                char leftChar = s[i];

                if (mpp.find(leftChar) != mpp.end()) {
                    mpp[leftChar]++;

                    if (mpp[leftChar] > 0) {
                        count++;
                    }
                }

                i++;
            }

            j++;
        }

        return ans;
    }
};
