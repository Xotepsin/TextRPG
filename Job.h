#ifndef JOB_H
#define JOB_H

#include <string>

using namespace std;

class Job {
public:
    virtual void showJob() = 0; // �������� ����ϴ� ���� �Լ�
    virtual ~Job() {}
};

#endif