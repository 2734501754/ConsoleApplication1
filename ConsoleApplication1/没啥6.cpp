#include <iostream>
#include <cstdlib>
using namespace std;
struct /*StudentInformation*/
{
    char name[20];
    int num;
    double Chinese;
    double English;
    double Math;
    double average;
    double all;
} StudentInfo;

int maino()
{
    cout << "������ѧ��������:" << endl;
    cin.getline(StudentInfo.name, 19);
    cout << "������ѧ����ѧ��:" << endl;
    cin >> StudentInfo.num;
    cout << "������ѧ�������ĳɼ�:" << endl;
    cin >> StudentInfo.Chinese;
    cout << "������ѧ������ѧ�ɼ�:" << endl;
    cin >> StudentInfo.Math;
    cout << "������ѧ����Ӣ��ɼ�:" << endl;
    cin >> StudentInfo.English;

    cout << StudentInfo.name << "ͬѧ ѧ��:" << StudentInfo.num << endl;

    StudentInfo.all = StudentInfo.Chinese + StudentInfo.Math + StudentInfo.English;
    cout << "�ܷ���" << StudentInfo.all << endl;
    cout << "ƽ������:" << StudentInfo.all / 3 << endl;

    system("pause");
    return 0;
}