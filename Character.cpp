#include "Character.h"
#include <iostream>

using namespace std;

Character* Character::instance = nullptr;

//������ ����
Character::Character(string userName) : name(userName), level(1), maxHelth(200), helth(200), attack(30), experience(0), gold(0) {}

Character* Character::getInstance(string userName) {
	if (instance == nullptr) {
		instance = new Character(userName);
	}
	return instance;
}

void Character::dispalyStatus()
{
	cout << "���� ������ ����" << endl;
	cout << "����: " << level << endl;
	cout << "ü��: " << helth << "/" << maxHelth << endl;
	cout << "����ġ: " << experience << endl;
	cout << "���ݷ�: " << attack << endl;
	cout << "�������: " << gold << endl;
}

void Character::levelUp()
{

}

void Character::useItem(int index)
{
}
