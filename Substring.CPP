class Solution {
public:

int strStr(const std::string& haystack, const std::string& needle) {
    int haystackLen = haystack.length();
    int needleLen = needle.length();

    if (needleLen == 0) {
        return 0;  // Empty needle, needle is always present at index 0
    }

    if (needleLen > haystackLen) {
        return -1;  // Needle is longer than haystack, needle cannot be part of haystack
    }

    for (int i = 0; i <= haystackLen - needleLen; ++i) {
        int j;
        for (j = 0; j < needleLen; ++j) {
            if (haystack[i + j] != needle[j]) {
                break;  // Characters don't match, move to the next position in haystack
            }
        }
        if (j == needleLen) {
            return i;  // Found the needle in haystack
        }
    }

    return -1;  // Needle not found in haystack
}};
