
#include <bits/stdc++.h>
using namespace std;



void permute(char &a, int l, int r)
{
	
	if (l == r)
		cout<<a<<endl;
	else
	{
		for (int i = l; i <= r; i++)
		{

			swap(a[l], a[i]);
			permute(a, l+1, r);
			swap(a[l], a[i]);
		}
	}
}

int main()
{
	char str[] = "ABC";
	int n = sizeof(str)/sizeof(str[0]);
	permute(str, 0, n-1);
	return 0;
}
