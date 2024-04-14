#include <bits/stdc++.h>
using namespace std;

#define int                 long long
#define double              long double
#define endl                '\n'
#define gap                 ' '
#define dbg(x)              cout<<#x<<" = "<<x<<'\n'
#define print(b)            for(auto &a:b) cout<<a<<' ';
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
int mod = 1e9 + 7;
const int N = 1e5 + 10;
int cnt;
int prec(char c) {

    if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
char associativity(char c) {
    return 'L';
}
void solve() {
    string s;
    string c;
    scanf("\n");
    while (1) {
        getline(cin, c);
        if (c.length() == 0 || !cin)
            break;
        s.push_back(c[0]);
    }
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && prec(s[i]) < prec(st.top()) ||
                    !st.empty() && prec(s[i]) == prec(st.top()) &&
                    associativity(s[i]) == 'L') {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    cout << result << endl;
    if (cnt > 0)
        cout << endl;
}

signed main() {
    // FASTIO
    int t = 1;
    cin >> t;
    while (t--) {
        cnt = t;
        solve();
    }

    return 0;
}