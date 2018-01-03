//
// Created by jessy on 01/03/18.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdbool>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);
const int INF = (1 << 30) - 1;
const double eps = 1e-8;

#define Equ(a, b) ((fabs((a)-(b)))<(eps))
#define More(a, b) (((a)-(b))>(eps))
#define Less(a, b) (((a)-(b))<(-eps))
#define MoreEqu(a, b) (((a)-(b))>(-eps))
#define LessEqu(a, b) (((a)-(b))<(eps))

int main() {
    int T;
    while (scanf("%d", &T) != -1) {
        int even = 0, odd = 0;
        for (int i = 0; i < T; ++i) {
            int a;
            scanf("%d", &a);
            if (a % 2) odd++;
            else even++;
        }
        if (odd < even)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}