#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int maxVowels(string s, int k) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxVowelCount = 0;
    int currentVowelCount = 0;

    // Count vowels in the first k characters of the string.
    for (int i = 0; i < k; ++i) {
        if (vowels.find(s[i]) != vowels.end()) {
            currentVowelCount++;
        }
    }
    maxVowelCount = currentVowelCount;

    // Slide the window and update vowel counts.
    for (int i = k; i < s.length(); ++i) {
        if (vowels.find(s[i - k]) != vowels.end()) {
            currentVowelCount--;
        }
        if (vowels.find(s[i]) != vowels.end()) {
            currentVowelCount++;
        }
        maxVowelCount = max(maxVowelCount, currentVowelCount);
    }

    return maxVowelCount;
}

int main() {
    string s = "abciiidef";
    int k = 3;
    cout << "Maximum number of vowels in a substring of length " << k << " is: " << maxVowels(s, k) << endl;
    return 0;
}
