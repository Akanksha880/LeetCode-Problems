class Solution {
public:
    bool halvesAreAlike(string s) {
     int count1 = 0, count2 = 0;
     string vowels = "aeiouAEIOU";
     for (int i = 0; i < s.length() / 2; i++) {
      if (vowels.find(s[i]) != string::npos) {
      count1++;
     }
     }
    for (int i = s.length() / 2; i < s.length(); i++) {
     if (vowels.find(s[i]) != string::npos) {
     count2++;
            }
        }
        return count1 == count2;
    }
};
