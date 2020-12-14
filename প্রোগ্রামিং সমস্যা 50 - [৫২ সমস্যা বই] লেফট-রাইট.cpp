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
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int len = s.size();
        string ans = "";
        for(int i = 0; i < len; i++) {
            if(s[i] == 'R') {
                ans += s[i+1];
            } else if(s[i] == 'L') {
                ans += s[i-1];
            } else {
                ans += s[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
