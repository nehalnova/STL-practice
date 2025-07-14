// pq_sorting.cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {4, 2, 8, 5, 1};
    priority_queue<int> maxHeap;

    for (int x : nums)
        maxHeap.push(x);

    cout << "Max-Heap order: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    return 0;
}
