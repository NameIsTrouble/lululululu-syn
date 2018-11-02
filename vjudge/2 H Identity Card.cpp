#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		string x;
		int ar;
		cin >> x;
		if (x[0] == '3' && x[1] == '3')
			printf("He/She is from Zhejiang,and his/her birthday is on ");
		else if (x[0] == '1' && x[1] == '1')
			printf("He/She is from Beijing,and his/her birthday is on ");
		else if (x[0] == '7' && x[1] == '1')
			printf("He/She is from Taiwan,and his/her birthday is on ");
		else if (x[0] == '8' && x[1] == '1')
			printf("He/She is from Hong Kong,and his/her birthday is on ");
		else if (x[0] == '8' && x[1] == '2')
			printf("He/She is from Macao,and his/her birthday is on ");
		else if (x[0] == '5' && x[1] == '4')
			printf("He/She is from Tibet,and his/her birthday is on ");
		else if (x[0] == '2' && x[1] == '1')
			printf("He/She is from Liaoning,and his/her birthday is on ");
		else if (x[0] == '3' && x[1] == '1')
			printf("He/She is from Shanghai,and his/her birthday is on ");
		printf("%d%d,%d%d,%d%d%d%d based on the table.\n", x[10]-'0', x[11]-'0', x[12]-'0', x[13]-'0', x[6]-'0', x[7]-'0', x[8]-'0', x[9]-'0');
	}
	system("pause");
	return 0;
}