#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main() {
    vector<int> v = {3, 4, 6, 1, 5};

    v.push_back(7);
    v.pop_back();
    cout << "Size before insert: " << v.size() << endl;

    sort(v.begin(), v.end());
    v.insert(v.begin() + 2, 10); // Correct insert at index 2

    for (int i = 0; i < v.size(); i++) {
        v[i]++;
    }

    for (int x : v) {
        cout << x << " ";
    }

    cout << "\nFinal size: " << v.size() << endl;
}
    */

/*

int main(){
    vector<int> v =  {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0){
            v.erase(v.begin()+ i );
            i--;
        }
        
    }
    for(int &x :v){
        cout<<x<<" ";
    }

}
*/
/*
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> result;

    for (int x : v) {
        if (x % 2 != 0) result.push_back(x);
    }

    for (int x : result)
        cout << x << " ";
}
*/
/*

int main(){
    vector<int> v = {1,10,5,6,8};
    sort(v.begin(), v.end());
    cout<<v[v.size()-2]<<endl;

}
*/



