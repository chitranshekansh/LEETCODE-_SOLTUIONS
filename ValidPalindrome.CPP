class Solution {
public:
    bool isPalindrome(string str) {
  string cleaned;
    for (char c : str) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }
    
    
    int left = 0;
    int right = cleaned.length() - 1;
    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

    
};
