// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>

// 학생 정보 구조체
struct Student_info {
    std::string name;           // 학생 이름
    std::vector<int> scores;    // 과제 점수들

    double average() const;     // 과제 점수의 평균을 계산하는 함수
};

// 이름을 기준으로 두 학생을 비교하는 함수
bool compare(const Student_info& x, const Student_info& y);

// 학생의 이름과 점수를 입력받는 함수
std::istream& read(std::istream& is, Student_info& s);

// 학생의 점수를 입력받는 함수
std::istream& read_scores(std::istream& in, std::vector<int>& scores);

#endif
