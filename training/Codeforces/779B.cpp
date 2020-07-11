// written at 15:46 on 26 Feb 2017 
#include <bits/stdc++.h>

#define IOS std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
// #define __DEBUG__
#ifdef __DEBUG__
    #define DEBUG(...) printf(__VA_ARGS__)
#else
    #define DEBUG(...)
#endif
#define filename ""
#define setfile() freopen(filename".in", "r", stdin); freopen(filename".ans", "w", stdout);
#define resetfile() freopen("/dev/tty", "r", stdin); freopen("/dev/tty", "w", stdout); system("more " filename".ans");
#define rep(i, j, k) for (int i = j; i < k; ++i)
#define irep(i, j, k) for (int i = j - 1; i >= k; --i)

using namespace std;

template <typename T>
inline T sqr(T a) { return a * a;};

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int > Pii;

const double pi = acos(-1.0);
const int INF = INT_MAX;
const ll LLINF = LLONG_MAX;
const int MAX_N = 1e5 + 10;

int N, k, cnt;
vector<int> v;

int main(int argc, char const *argv[])
{
    cin >> N >> k;
    if (!N) return printf("0\n"), 0;
    while (N) {
        v.push_back(N % 10);
        N /= 10;
    }
    for (int i = 0; i < v.size(); ++i) {
        if (!v[i]) ++cnt;
        if (cnt == k) return printf("%d\n", i + 1 - cnt), 0;
    }
    printf("%d\n", (int)v.size() - 1);
    return 0;
}