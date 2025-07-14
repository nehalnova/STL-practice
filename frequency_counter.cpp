// frequency_counter.cpp
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 4, 5, 5};
    map<int, int> freq;

    for (int x : arr) freq[x]++;

    for (auto p : freq)
        cout << p.first << ": " << p.second << endl;
    return 0;
}