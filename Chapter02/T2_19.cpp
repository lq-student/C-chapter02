/*Date:March 12th.2022
  Name:Liu Qiang
  Email:2515602256@qq.com
  Function:输入三个整数，输出它们的和，平均值，乘积，和最值
  */

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum = 0, Average = 0, product, smallest, largest;
    cout << "Input three different number:";
    cin >> a >> b >> c;
    sum = a + b + c;
    Average = sum / 3;
    product = a * b * c;
    largest = smallest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;
    cout << "sum is " << sum << endl;
    cout << "Average is " << Average << endl;
    cout << "product is " << product << endl;
    cout << "smallest is" << smallest << endl;
    cout << "largest is " << largest << endl;
    return 0;
}
