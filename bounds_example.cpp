#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 2, 3, 4, 5};

    auto lb = lower_bound(v.begin(), v.end(), 2); // first position >= 2
    auto ub = upper_bound(v.begin(), v.end(), 2); // first position > 2

    cout << "Lower bound of 2: " << (lb - v.begin()) << endl;
    cout << "Upper bound of 2: " << (ub - v.begin()) << endl;
    return 0;
}
