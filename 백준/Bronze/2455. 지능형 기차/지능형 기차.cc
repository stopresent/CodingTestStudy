#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;


int a, b, ret = 0, sum = 0;
void solve()
{
	for (int i = 0; i < 4; ++i)
	{
		cin >> a >> b;
		sum -= a;
		sum += b;
		ret = max(ret, sum);
	}
	cout << ret;
}

int main()
{
	FILE* stream;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen_s(&stream, "input.txt", "rt", stdin);

	solve();

	return 0;
}