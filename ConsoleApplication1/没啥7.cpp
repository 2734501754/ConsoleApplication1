#include <iostream>
using namespace std;
struct juxing
{
    double l_ong;
    double kuan;
}changkuan;
int maine()
{
    cout << "��������εĳ�:" << endl;
    cin >> changkuan.l_ong;
    cout << "��������εĿ�:" << endl;
    cin >> changkuan.kuan;
    double mianji = changkuan.l_ong * changkuan.kuan;
    double zhouchang = 2*(changkuan.l_ong + changkuan.kuan);
    cout << "���ε������:" << mianji << endl;
    cout << "���ε��ܳ���:" << zhouchang << endl;
    return 0;
}