#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long

const int M = 2e5 + 1;
char s[M];

void solve() {
	scanf("%s", &s);
	int n = strlen(s);
	set<char> c;
	bool ok = true;
	int k = -1;
	for (k = 0; k < n; k++) {
		if (c.find(s[k]) == c.end()) c.insert(s[k]);
		else break;
	}
	for (int i = k; i < n; i++) {
		if (s[i] != s[i - k]) ok = false;
	}
	printf(ok ? "YES\n" : "NO\n");
}


int main() {
	
	int t;
	scanf("%d", &t);
	while(t--) {
		solve();
	}
	
	return 0;
}
