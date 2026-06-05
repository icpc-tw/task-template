#include<bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for (auto &a : x)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define smx(a, b) a = max(a, b)
#define smn(a, b) a = min(a, b)
#define F first
#define S second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template<typename T> ostream& operator<<(ostream &os, const vector<T> &v) {
    os << '{'; string sep; for (const auto &x : v) os << sep << x, sep = ", "; return os << ')';
}

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H; dbg_out(T...);
}

#ifdef CARDINAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

const ll MOD = 1e9+7;
mt19937 rng(time(0));

const ll M=1000000;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll A,B;
    cin>>A>>B;

    vi ans;
    ll s=B;
    int m=0;

    while(s!=A*(2*m+1))
    {
        m++;
        s+=B;
        ll need=A*(2*m+1)-s;
        ll take=max(min(need,M),-M);
        s+=take;
        ans.pb(take);
    }

    vi fin;
    rep(i,0,m+1) fin.pb(B);
    trav(a,ans) fin.pb(a);

    sort(all(fin));
    m=sz(fin);

    cout<<m<<"\n";
    trav(a,fin) cout<<a<<" ";
    cout<<"\n";

    ll sm=accumulate(all(fin),0LL);
    assert(sm==A*m);
    assert(fin[m/2]==B);
}
