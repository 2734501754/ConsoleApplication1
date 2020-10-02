#include <iostream>
using namespace std;
struct juxing
{
    double l_ong;
    double kuan;
}changkuan;
int maine()
{
    cout << "请输入矩形的长:" << endl;
    cin >> changkuan.l_ong;
    cout << "请输入矩形的宽:" << endl;
    cin >> changkuan.kuan;
    double mianji = changkuan.l_ong * changkuan.kuan;
    double zhouchang = 2*(changkuan.l_ong + changkuan.kuan);
    cout << "矩形的面积是:" << mianji << endl;
    cout << "矩形的周长是:" << zhouchang << endl;
    return 0;
}