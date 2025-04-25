// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

// �л� ���� ����ü
struct Student_info {
    std::string name;           // �л� �̸�
    std::vector<int> scores;    // ���� ������

    double average() const;     // ���� ������ ����� ����ϴ� �Լ�
};

// �̸��� �������� �� �л��� ���ϴ� �Լ�
bool compare(const Student_info& x, const Student_info& y);

// �л��� �̸��� ������ �Է¹޴� �Լ�
std::istream& read(std::istream& is, Student_info& s);

// �л��� ������ �Է¹޴� �Լ�
std::istream& read_scores(std::istream& in, std::vector<int>& scores);

#endif
