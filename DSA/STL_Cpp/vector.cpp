#include <bits/stdc++.h>
using namespace std;
int main() {
    // string s;
    // getline(cin, s);
    // cout << s;
    // vector<int>vec(6);
    // vec.assign(5, 10);
    // auto it = vec.begin();
    // for (; it < vec.at(5); it++) {
    //     cout << *it << endl;
    // }
    // for (auto &i : vec)//for this type of initialization  vector size has to be declared before;
    //     cin >> i;
    // sort(vec.rbegin(), vec.rend());//descending order
    // for (auto i : vec)
    //     cout << i << endl;

    // cout << vec.size() << endl;
    // vec.assign(5, 3);
    // cout << vec.size() << endl;
    // for (auto i : vec)
    //     cout << i << endl;
    //2d vector input
    vector<vector<int>>vec2;
    for (int i = 0; i < 5; i++) {
        vector<int>matrix;
        for (int j = 0; j < 2; j++) {
            int x;
            cin >> x;
            matrix.push_back(x);

        }
        vec2.push_back(matrix);

    }



    return 0;

}

/// 1 2 2 3 3 4 4 5
///

// String
// Vector
//

/*
    _ _ _ _ _
    arr + 2*4byte
    data_type_memory * var_count
    dynamic array
    vector < data_type > var_name
    member_functions:
        1) arr.size() -> prints the current size of the vector (size int)
        2) arr.push_back() -> insert a value at the ending
        3) pop_back() -> decreaments size and frees up the memory
        4) begin() -> starting element tar iterator return kore
        5) end() -> points to the memory after the last element
        6) sort(param_1 , param_2)
                beginning_ele_address, ending_ele_address+1
                optional third param (comparator function)
                greater<int>() non-increasing

        vector initialization from input
        process 1:
        int x;
        cin>>x;
        arr.push_back(x);

        input theke push_back korte hole x nitei hobe
        process 2:

        vector<int>arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];

*/





