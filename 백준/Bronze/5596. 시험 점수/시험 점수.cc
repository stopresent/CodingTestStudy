#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>

using namespace std;

void solve()
{
	int max_num = 0, sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		int temp;
		cin >> temp;
		sum += temp;
	}

	max_num = max(max_num, sum);
	sum = 0;

	for (int i = 0; i < 4; ++i)
	{
		int temp;
		cin >> temp;
		sum += temp;
	}

	max_num = max(max_num, sum);
	cout << max_num;
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