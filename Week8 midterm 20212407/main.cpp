// main.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"

using namespace std;

int main() {
    int student_count;  // �л� ���� ������ ����
    cout << "�л� ���� ����Դϱ�?: ";
    cin >> student_count;

    vector<Student_info> students;  // �л� ������ ������ ����
    Student_info student;

    // �л� ����ŭ �л� ���� �Է¹ޱ�
    for (int i = 0; i < student_count; ++i) {
        cout << "== �л� " << i + 1 << " ==\n";
        read(cin, student);  // �л� �̸��� ���� �Է¹ޱ�
        students.push_back(student);
    }

    // �л��� �̸� ������ ����
    sort(students.begin(), students.end(), compare);

    // �̸��� ��� ���� ���
    cout << "\n--- �л����� ��� ���� ---\n";
    for (const auto& student : students) {
        cout << student.name << ": " << student.average() << endl;
    }

    return 0;
}
