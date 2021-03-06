#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


class Student {
public:
	Student() :m_strName("Jim"), m_iScore(10) {}
	void setName(string _name) {
		m_strName = _name;
	}
	string getName() {
		return m_strName;
	}
	void setGender(string _gender) {
		m_strGender = _gender;
	}
	string getGender() {
		return m_strGender;
	}

	int getScore() { //只读属性获取
		return m_iScore;
	}

	void initScore() { //初始化函数
		m_iScore = 0;
	}
	void study(int _score) {
		m_iScore += _score;// 总学分
	}

private:
	string m_strName;
	string m_strGender;
	int m_iScore;

};


int main(void) {
	Student stu;
	stu.initScore();
	stu.setName("zhangsan");
	stu.setGender("女");

	stu.study(5);
	stu.study(3);

	cout << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;
	
	Student stu2;
	cout << stu2.getName() << endl;
	system("pause");
	return 0;
}