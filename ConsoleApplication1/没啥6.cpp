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
    cout << "请输入学生的姓名:" << endl;
    cin.getline(StudentInfo.name, 19);
    cout << "请输入学生的学号:" << endl;
    cin >> StudentInfo.num;
    cout << "请输入学生的语文成绩:" << endl;
    cin >> StudentInfo.Chinese;
    cout << "请输入学生的数学成绩:" << endl;
    cin >> StudentInfo.Math;
    cout << "请输入学生的英语成绩:" << endl;
    cin >> StudentInfo.English;

    cout << StudentInfo.name << "同学 学号:" << StudentInfo.num << endl;

    StudentInfo.all = StudentInfo.Chinese + StudentInfo.Math + StudentInfo.English;
    cout << "总分是" << StudentInfo.all << endl;
    cout << "平均分是:" << StudentInfo.all / 3 << endl;

    system("pause");
    return 0;
}