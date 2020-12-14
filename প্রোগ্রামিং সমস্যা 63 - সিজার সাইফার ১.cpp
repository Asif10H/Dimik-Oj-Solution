#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long long unsigned int ull;
typedef long double ld;
typedef vector<int> vr;
typedef pair<int, int> pr;
#define pb push_back
#define ff first
#define ss second
#define INF 1999999999
#define MODA 1000000007
#define PI 3.1415926535897932384626433
#define endl "\n"
//cout << fixed << setprecision(2);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int key;
    string txt;
    getline(cin, txt);
    cin >> key;

    string ans = "";
    for(int i = 0; i < txt.size(); i++) {
        if(txt[i] >= 'A' && txt[i] <= 'Z') {
            /// cout << int(s[i] + k - 65) % 26 + 97 << " ";
            ans += char(int(txt[i] + key - 65) % 26 + 65);
        } else if(txt[i] >= 'a' && txt[i] <= 'z') {
            ///cout << int(s[i] + k - 97) % 26 + 97 << " ";
            ans += char(int(txt[i] + key - 97) % 26 + 97);
        } else {
            ans += txt[i];
        }
    }
    cout << ans << endl;

    return 0;
}
/*
//A 65 a 97
//Z 90 z 122

Abcd Wxyz
2
65 98 99 100 87 120 121 122 Cdef Yzab
Abcd Wxyz
2
67 100 101 102 89 122 123 124 Cdef Yzab
Abcd Wxyz
2
2 3 4 5 24 25 26 27 Cdef Yzab
Abcd Wxyz
2
2 3 4 5 24 25 0 1 Cdef Yzab
Abcd Wxyz
2
99 100 101 102 121 122 97 98 Cdef Yzab
C   d   e   f   Y   z   a  b
 */
