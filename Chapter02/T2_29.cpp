/*Date:March 12th.2022
  Name:Liu Qiang
  Email:2515602256@qq.com
  Function:输出数值表
  */

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    cout << "Number	Square	Cube	" << endl;
    for (i = 1; i <= n; i++)
        cout << i << "\t" << i * i << "\t" << i * i * i << "\t" << endl;

    return 0;
}
