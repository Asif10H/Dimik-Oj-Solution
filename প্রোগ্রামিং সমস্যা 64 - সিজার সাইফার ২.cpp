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
    int k;
    string txt;
    getline(cin, txt);
    cin >> k;
    int key = 26 - (k % 26);
    //cout << key << endl;
    string ans = "";
    for(int i = 0; i < txt.size(); i++) {
        if(txt[i] >= 'A' && txt[i] <= 'Z') {
            //cout << int(txt[i] + key - 65) % 26 + 97 << " ";
            ans += char(int(txt[i] + key - 65) % 26 + 65);
        } else if(txt[i] >= 'a' && txt[i] <= 'z') {
            //cout << int(txt[i] + key - 97) % 26 + 97 << " ";
            ans += char(int(txt[i] + key - 97) % 26 + 97);
        } else {
            ans += txt[i];
        }
    }
    cout << ans << endl;

    return 0;
}
