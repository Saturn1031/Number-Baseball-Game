#ifndef EXCEPTION
#define EXCEPTION
#include <string>
using namespace std;

class Exception {
	string errMsg1 = "��ȿ�� �� ���ڰ� �ƴմϴ�. �ٽ� �Է����ּ���.";
	string errMsg2 = "��ȿ�� �޴� ���ڰ� �ƴմϴ�. �ٽ� �Է����ּ���.";
	string errMsg3 = "�Է��� �� ���� �� �ߺ��� ���ڰ� �����մϴ�. �ٽ� �Է����ּ���.";
public:
	bool isValidNum(int* n);
	bool isValidGameNum(int n);
	bool isPrimaryPcNum(int n1, int n2, int n3);
};

#endif // !EXCEPTION