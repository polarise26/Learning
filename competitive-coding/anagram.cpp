#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> mapping(string s)
{
    int len = s.length();
    unordered_map<char, int> temp;
    for (int i = 0; i < len; ++i)
        temp[s[i]]++;
    return temp;
}

bool anagram(string s1, string s2)
{
    unordered_map<char, int> h1 = mapping(s1);
    unordered_map<char, int> h2 = mapping(s2);

    cout << "\nFrequency of each letter in \"" << s1 << "\"\n";
    for (auto i : h1)
        cout << i.first << "->" << i.second << endl;

    cout << "\nFrequency of each letter in \"" << s2 << "\"\n";
    for (auto i : h2)
        cout << i.first << " -> " << i.second << endl;

    if (s1.length() != s2.length())
        return false;

    if (h1 == h2)
        return true;
    return false;
}

int main()
{
    string s1, s2;

    cout << "Enter the first string!\n";
    cin >> s1;

    cout << "Enter the second string!\n";
    cin >> s2;

    if (anagram(s1, s2))
        cout << endl
             << s1 << " and " << s2 << " ARE anagrams!";
    else
        cout << endl
             << s1 << " and " << s2 << " are NOT anagrams!";

    return 0;
}