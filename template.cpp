#include <iostream>
#include <cstdio>
#include <string>
#include <sstream> 
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <ctime>
#include <cassert>
using namespace std;

#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define SZ(x) ((int)x.size())

#define FOR(i,n) for(int i=0;i<(int)n;++i)
#define FORI(i,n) for(int i=1;i<=(int)n;++i)

#define REP(i,a,b) for(int i=a; (int)i<=b;++i)
#define REPD(i,a,b) for(int i=a; (int)i>=b;--i)

#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << "\n";
#define DBGV(vari) cerr << #vari<< " = "<< (vari) << "\n";

using LL = long long;
using ULL = unsigned long long;

//important functions
// auto compute_Binomail_Coefficient() -> void {

//     for (ULL i = 0; i <= MAX; i++) {
//         comb[i][0] = comb[i][i] = 1;

//         for (ULL j = 1; j < i; j++) {
//             comb[i][j] = comb[i - 1][j] + comb[i - 1][j - 1]; //n+1Cr = nCr + nCr-1 
//             if (comb[i][j] >= MOD)
//                 comb[i][j] -= MOD;
//         }
//     }
// }


// auto power(ULL a, ULL b)-> ULL {
//     ULL result = 1;
//     while (b > 0) {
//         if (b & 1) //equivalent to b % 2 == 1 
//             result = (result * a) % MOD;
//         a = (a * a) % MOD;
//         b >>= 1; // equivalent to b /= 2
//     }
//     return result;
// }

int main()
{
    DBG;
    FOR(i, 10) {
        DBGV(i);
    }

    REP(i, 10, 20){
        DBGV(i);
    }

    return 0;
}