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
    int m, n;
    cin >> m >> n;
    vector<pair<string, int> > vp;
    for(int i = 0; i < m; i++) {
        string s;
        int tm;
        cin >> s >> tm;
        vp.push_back(make_pair(s, tm));
    }
    for(int i = 0; i < n; i++) {
        string sc;
        vector<string> str;
        while(cin >> sc) {
            if(sc == ".") {
                break;
            }
            str.push_back(sc);
        }
       ll sum = 0;
        for(int i = 0; i < str.size(); i++) {
            for(auto it = vp.begin(); it != vp.end(); it++) {
                if(it->first == str[i]) {
                    sum += it->second;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
