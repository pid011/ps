#include <bits/stdc++.h>

using namespace std;

int main() {
  int count = 0;
  cin >> count;

  vector<string> words;
  for (int i = 0; i < count; i++) {
    string word;
    cin >> word;
    words.push_back(word);
  }

  sort(words.begin(), words.end(), [](string a, string b) {
    if (a.length() == b.length()) {
      return a < b;
    }
    return a.length() < b.length();
  });

  words.erase(unique(words.begin(), words.end()), words.end());

  for (int i = 0; i < count; i++) {
    cout << words[i] << '\n';
  }
}