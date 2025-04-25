// main.cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.h"

using namespace std;

int main() {
    int student_count;  // 학생 수를 저장할 변수
    cout << "학생 수는 몇명입니까?: ";
    cin >> student_count;

    vector<Student_info> students;  // 학생 정보를 저장할 벡터
    Student_info student;

    // 학생 수만큼 학생 정보 입력받기
    for (int i = 0; i < student_count; ++i) {
        cout << "== 학생 " << i + 1 << " ==\n";
        read(cin, student);  // 학생 이름과 점수 입력받기
        students.push_back(student);
    }

    // 학생을 이름 순으로 정렬
    sort(students.begin(), students.end(), compare);

    // 이름과 평균 점수 출력
    cout << "\n--- 학생들의 평균 점수 ---\n";
    for (const auto& student : students) {
        cout << student.name << ": " << student.average() << endl;
    }

    return 0;
}
