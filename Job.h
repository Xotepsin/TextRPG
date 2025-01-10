#ifndef JOB_H
#define JOB_H

#include <string>

using namespace std;

class Job {
public:
    virtual void showJob() = 0; // 직업명을 출력하는 가상 함수
    virtual ~Job() {}
};

#endif