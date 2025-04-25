// functions.cpp
#include "functions.h"
#include <iostream>
#include <numeric> 

// ���� ������ ����� ����ϴ� �Լ�
double Student_info::average() const {
    double sum = std::accumulate(scores.begin(), scores.end(), 0);
    return sum / scores.size();  // ������ ��� ���
}

// �̸��� �������� �� �л��� ���ϴ� �Լ�
bool compare(const Student_info& x, const Student_info& y) {
    return x.name < y.name;  // �̸��� �������� �������� ����
}

// �л� �̸��� ������ �Է¹޴� �Լ�
std::istream& read(std::istream& is, Student_info& s) {
    std::cout << "�̸��� �Է��ϼ���: ";
    std::getline(is, s.name);  // �̸� �Է� �� std::getline() ����Ͽ� ���� ���� ����
    std::cout << "���� ������ �Է��ϼ���: ";
    read_scores(is, s.scores);  // �л��� ���� �Է¹ޱ�
    return is;
}

// ���� 5���� �Է¹޴� �Լ�
std::istream& read_scores(std::istream& in, std::vector<int>& scores) {
    if (in) {
        scores.clear();  // ���� ������ ����� ���� �Է¹ޱ�
        int score;
        for (int i = 0; i < 5; ++i) {  // 5���� ���� �Է¹ޱ�
            in >> score;
            scores.push_back(score);  // ���� ���Ϳ� �߰�
        }
    }
    return in;
}
