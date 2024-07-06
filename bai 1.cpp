	/*Ma so sinh vien: 23110237
	//Ho va ten sinh vien: Nguyen Thanh Khang
	//Ngay sinh: 05/03/2005
	Lop: PRTE230385_23_2_04
	*/
	#include <bits/stdc++.h>
	#define max_e 101
	using namespace std;
	
	string ADD(string a, string b)
	{
		int carry = 0;
		string result;
		int i = a.size() - 1;
		int j = b.size() - 1;
		while (i >= 0 || j >= 0 || carry > 0)
		{
			int sum = carry;
			if (i >= 0) sum += (a[i--] - '0');
			if (j >= 0) sum += (b[j--] - '0');
			carry = sum / 10;
			result.insert(result.begin(), sum % 10 + '0');
		}
		return result;
	}
	
	int main()
	{
		long long n,k;
		cin >> n >> k;
		string c[max_e][max_e];
		for (int i = 1; i <= n; i++)
		{
			c[0][i] = "1";
			c[i][i] = "1";
		}
		for (int i = 2; i <= n + 1; i++)
		{
			for (int j = 1; j <= i + 1; j++)
			{
				c[i][j] = ADD(c[i-1][j - 1], c[i-1][j]);
			}
		}
	//	for (int i = 2; i <= n + 1; i++)
	//	{
	//		for (int j = 1; j <= i; j++)
	//		{
	//			cout << c[i][j] << " ";
	//		}
	//		cout << endl;
	//	}
		cout << c[n+1][k+1];
		return 0;
	}
	
	
	
	
	
	

