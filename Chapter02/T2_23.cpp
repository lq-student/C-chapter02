/*/*Date:March 12th.2022
  Name:Liu Qiang
  Email:2515602256@qq.com
  Function:���������������������ֵ����Сֵ
  */
#include <iostream>
using namespace std;
int main()
{
	int a[5], max, min;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	max = a[0];
	min = a[0];
	for (int j = 0; j < 5; j++)
	{
		if (max < a[j])
		{
			max = a[j];
		}
		if (min > a[j])
		{
			min = a[j];
		}
	}
	cout << "���ֵΪ" << max << endl;
	cout << "��СֵΪ" << min << endl;



	return 0;
}
