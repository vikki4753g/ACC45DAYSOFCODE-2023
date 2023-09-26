#include <iostream>
#include <vector>

using namespace std;

int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> countRemainders(k, 0);
    
    for (int i = 0; i < s.size(); i++) {
        countRemainders[s[i] % k]++;
    }
    
    int result = min(countRemainders[0], 1); 
    for (int i = 1; i <= k / 2; i++) {
        if (i != k - i) {
            result += max(countRemainders[i], countRemainders[k - i]);
        } else {
            result += 1;
        }
    }
    
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int result = nonDivisibleSubset(k, s);
    
    cout << result << endl;
    
    return 0;
}
