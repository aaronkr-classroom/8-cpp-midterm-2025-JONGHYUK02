// functions.cpp
#include "functions.h"
#include <iostream>
#include <numeric> 

// 과제 점수의 평균을 계산하는 함수
double Student_info::average() const {
    double sum = std::accumulate(scores.begin(), scores.end(), 0);
    return sum / scores.size();  // 점수의 평균 계산
}

// 이름을 기준으로 두 학생을 비교하는 함수
bool compare(const Student_info& x, const Student_info& y) {
    return x.name < y.name;  // 이름을 기준으로 오름차순 정렬
}

// 학생 이름과 점수를 입력받는 함수
std::istream& read(std::istream& is, Student_info& s) {
    std::cout << "이름을 입력하세요: ";
    std::getline(is, s.name);  // 이름 입력 시 std::getline() 사용하여 공백 포함 가능
    std::cout << "과제 점수를 입력하세요: ";
    read_scores(is, s.scores);  // 학생의 점수 입력받기
    return is;
}

// 점수 5개를 입력받는 함수
std::istream& read_scores(std::istream& in, std::vector<int>& scores) {
    if (in) {
        scores.clear();  // 이전 점수를 지우고 새로 입력받기
        int score;
        for (int i = 0; i < 5; ++i) {  // 5개의 점수 입력받기
            in >> score;
            scores.push_back(score);  // 점수 벡터에 추가
        }
    }
    return in;
}
