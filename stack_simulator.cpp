// stack_simulator.cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s = "(()(()))";
    stack<char> stk;

    for (char ch : s) {
        if (ch == '(') stk.push(ch);
        else if (!stk.empty()) stk.pop();
    }

    cout << "Unmatched opening brackets: " << stk.size() << endl;
    return 0;
}