class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastWord;
         stringstream ss(s);
    string word;

    while (ss >> word) {
        lastWord = word;
    }
     return lastWord.size();
    }
};