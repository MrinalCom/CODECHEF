#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isEasyToPronounce(string name) {
    int n = name.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (isVowel(name[i])) {
            count = 0;
        } else {
            count++;
            if (count == 4) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        int n;
        cin >> n;
        cin.ignore(); 
        string name;
        getline(cin, name);

        if (isEasyToPronounce(name)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
