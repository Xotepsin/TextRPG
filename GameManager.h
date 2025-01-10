#ifndef GAMEMANAGER_H_
#define GAMEMANAGER_H_

#include <cstdlib>
#include <ctime>

#include "Character.h"
#include "Shop.h"
#include "Inventory.h"
#include "Item.h"
#include "Inventory.h"

using namespace std;

// Text RPG에서 GameManager는 단 하나만 존재해야 하므로 싱글톤 사용
class GameManager
{
private:
	// 정적 멤버 변수로 싱글톤 인스턴스를 저장
	static GameManager* instance;

	GameManager()
	{
	};

	~GameManager()
	{
	};

	GameManager(const GameManager&) = delete;
	GameManager& operator=(const GameManager) = delete;


public:
	// 싱글톤 인스턴스 접근 메서드
	static GameManager* getInstance()
	{
		if (instance == nullptr)
		{
			instance = new GameManager();
		}
		return instance;
	}

	// 상점 방문
	void visitShop(Character* player)
	{
		displayItems();
		buyItem();
		sellItem();
	}

	// 인벤토리 표시
	void displayInventory(Character* player)
	{
		cout << "======현재 소지한 아이템======" << endl;
		for (*item item : player->inventory)
		{
			cout << "\"" << item->getName() << "\"" << endl;
		}
		cout << "==============================." << endl;
	}

};

#endif // !GAMEMANAGER_H_