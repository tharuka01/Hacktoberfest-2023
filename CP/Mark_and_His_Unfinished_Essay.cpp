#include <bits/stdc++.h>
#include <numeric>
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define int long long int
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j, k) FOR(i, j, k, 1)
#define RREP(i, j, k) RFOR(i, k, j, 1)
typedef std::pair<int, int> PII;
typedef std::vector<int> VI;
typedef std::vector<std::string> VS;
typedef std::vector<PII> VII;
typedef std::vector<VI> VVI;
typedef std::map<int,int> MPII;
typedef std::set<int> SETI;
typedef std::multiset<int> MSETI;
using namespace std;

///*------------------------FUNCTIONS-----------------------*///
int gcd(int a, int b) { 
if (b == 0) { 
return a; 
} 
return gcd(b, a % b); 
}
///*--------------------CODE BEGINS HERE--------------------*///

int32_t main() {
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while(t--){
int n,c,q;
cin >> n >> c >> q;
string s;
cin >> s;
int l[c],r[c];
int ltemp[c],rtemp[c];
ltemp[0]=s.size()+1;

int finsize=0;
REP(i,0,c){
    cin >> l[i] >> r[i];
    finsize+=r[i]-l[i]+1;
    if(i!=0){
    ltemp[i]=rtemp[i-1]+1;
    }
    rtemp[i]=ltemp[i]+r[i]-l[i];
    // rtemp[0]=s.size()+r[0]-l[0]-1;
    // cout << ltemp[i] << " "<<rtemp[i]<<endl;
}
finsize+=s.size();
// cout << finsize<<endl;
int que[q];
REP(i,0,q){
    cin >> que[i];
    out:;
    if(que[i]>=1 && que[i]<=s.size()){
        cout << s[que[i]-1]<<endl;
        goto end;
    }
    else{
        REP(j,0,c){
            if(que[i]>=ltemp[j] && que[i]<=rtemp[j]){
                    int hold = que[i]-ltemp[j];
                    que[i] = l[j]+hold;
                    goto out;
            }
        }
    }
end:;
}
}
return 0;
}
