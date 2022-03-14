/*Date:March 12th.2022
  Name:Liu Qiang
  Email:2515602256@qq.com
  Function:计算节省的汽车消费
  */
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e,price;
    cout << "请输入每天开的总英里数：" << endl;
    cin >> a;
    cout << "每加仑汽油的价格；" << endl;
    cin >> b;
    cout << "每加仑汽油可以开的平均英里数：" << endl;
    cin >> c;
    cout << "每日的停车费：" << endl;
    cin >> d;
    cout << "每日的通行费：" << endl;
    cin >> e;
    price = a / c * b + d + e;
    cout << "每天可以省的汽车消费是：" << price << endl;




    return 0;
}

