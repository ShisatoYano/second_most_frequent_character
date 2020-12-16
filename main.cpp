#include <bits/stdc++.h>
using namespace std;

#define NO_OF_CHARS 256

// find second most frequent character
// in a given string
char find_2nd_most_freq(string str) {
    // count number of occurrences
    int count[NO_OF_CHARS] = {0};
    for (int i = 0; str[i]; ++i) {
        count[str[i]]++;
    }

    // traverse through count array
    // find second highest element
    int first = 0, second = 0;
    for (int j = 0; j < NO_OF_CHARS; ++j) {
        if (count[j] > count[first]) {
            second = first;
            first = j;
        }
        else if (count[j] > count[second] &&
                count[j] != count[first]) {
            second = j;
        }
    }

    return second;
}

int main() {
    char res_1 = find_2nd_most_freq("geeksforgeeks");
    if (res_1 != '\0') {
        cout << "Second most frequent char is " << res_1 << endl;
    } else {
        cout << "Second most frequent char is " << endl;
    }

    char res_2 = find_2nd_most_freq("aabababa");
    if (res_2 != '\0') {
        cout << "Second most frequent char is " << res_2 << endl;
    } else {
        cout << "Second most frequent char is " << endl;
    }

    return 0;
}
