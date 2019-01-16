#include "pch.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

/*LSPD = 0
LSSD = 1
FBI = 2
DEA = 3
GROVE STRET FAMILIES = 4
SEVILLE = 5
temple drive families = 6
front yard ballas = 7
rollin heights ballas = 8
kilo tray ballas = 9
aztecas = 10
vagos = 11
rifa = 12
triads = 13
danang = 14
las venturas mafia = 15
*/

string nickname, gangName, ownedCar;
int money = 0, robMoney = 0, moneyBank = 0, drugs = 0, guns = 0, fbiMission = 0, deaMission = 0, heatCount = 0, respectCount = 50, gangid, lastAttacker = 0, gangs[16], lspdCount = 100, lssdCount = 50, fbiCount = 40, deaCount = 20, groveCount = 50, sevilleCount = 50, templeCount = 50, frontCount = 50, rollinCount = 50, kiloCount = 50, aztecasCount = 150, vagosCount = 150, rifaCount = 150, triadsCount = 50, nangCount = 50, mafiaCount = 30;

int randNum(int min, int max)
{
	return rand() % max + min;
}

class MyClass {
	friend void Attack(), Ammunation(), HoodGaming(), GangWar(), Corner(),  CarDealer(), Bank(), Chase(), Prison(), Work(), Window(), NewDay(), gameOver(), gameStart(), gameMain();

public: void Attack()
{
	int choose;
	int people;
	cout << "Kogo chcesz zaatakowac? Wybierz numer. Odwet nie przynosi wielkich szkod w statystykach: " << endl;
	cin >> choose;
	if (choose == lastAttacker)
	{
		cout << "Ile osob ze soba bierzesz? (kazda musi miec bron): ";
		cin >> people;
		if (people > gangs[gangid] || people > guns)
		{
			cout << "Nie masz wystarczajacej ilosci broni albo ludzi." << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "Trwa wjazd na oske, zalezny od pojazdu." << endl;
			if (ownedCar == "") Sleep(60000);
			if (ownedCar == "brodway") Sleep(60000);
			if (ownedCar == "buccaneer") Sleep(60000);
			if (ownedCar == "greenwood") Sleep(50000);
			if (ownedCar == "picador") Sleep(55000);
			if (ownedCar == "solair") Sleep(40000);
			if (ownedCar == "sanchez") Sleep(60000);
			if (ownedCar == "sunrise") Sleep(30000);
			if (ownedCar == "elegy") Sleep(45000);
			if (ownedCar == "sultan") Sleep(10000);
			if (ownedCar == "bullet") Sleep(35000);
			if (ownedCar == "huntley") Sleep(1);
			if (ownedCar == "cheetah") Sleep(20000);
			if (ownedCar == "turismo") Sleep(10000);
			if (ownedCar == "infernus") Sleep(1);
			int randHoodPeople = randNum(1, gangs[lastAttacker]);
			bool fight = true;
			while (fight == true)
			{
				int randDeath = randNum(1, 3);
				if (randDeath == 1)
				{
					cout << "Twoj przyjaciel zginal na polu walki i stracil bron (" << people << ") zywych." << endl;
					guns -= 1;
					gangs[gangid] -= 1;
					people -= 1;
				}
				else if (randDeath == 2 || 3)
				{
					cout << "Przeciwnik lezy martwy (" << randHoodPeople << " zywych." << endl;
					gangs[lastAttacker] -= 1;
					randHoodPeople -= 1;
				}
				if (people <= 0 || guns <= 0 || randHoodPeople <= 0)
				{
					fight = false;
				}
				Sleep(1000);
			}
		}
		lastAttacker = 0;
		heatCount += 5;
		respectCount -= 5;
		fbiMission += 2;
		cout << "Walka zakonczona!" << endl;
		system("pause");
		NewDay();
	}
	else
	{
		cout << "Ile osob ze soba bierzesz? (kazda musi miec bron): ";
		cin >> people;
		if (people > gangs[gangid] || people > guns)
		{
			cout << "Nie masz wystarczajacej ilosci broni albo ludzi." << endl;
			system("pause");
			system("cls");
		}
		else
		{
			cout << "Trwa wjazd na oske, zalezny od pojazdu." << endl;
			if (ownedCar == "") Sleep(60000);
			if (ownedCar == "brodway") Sleep(60000);
			if (ownedCar == "buccaneer") Sleep(60000);
			if (ownedCar == "greenwood") Sleep(50000);
			if (ownedCar == "picador") Sleep(55000);
			if (ownedCar == "solair") Sleep(40000);
			if (ownedCar == "sanchez") Sleep(60000);
			if (ownedCar == "sunrise") Sleep(30000);
			if (ownedCar == "elegy") Sleep(45000);
			if (ownedCar == "sultan") Sleep(10000);
			if (ownedCar == "bullet") Sleep(35000);
			if (ownedCar == "huntley") Sleep(1);
			if (ownedCar == "cheetah") Sleep(20000);
			if (ownedCar == "turismo") Sleep(10000);
			if (ownedCar == "infernus") Sleep(1);
			int randHoodPeople = randNum(1, gangs[choose]);
			bool fight = true;
			while (fight == true)
			{
				int randDeath = randNum(1, 2);
				if (randDeath == 1)
				{
					cout << "Twoj przyjaciel zginal na polu walki i stracil bron (" << people << ") zywych." << endl;
					guns -= 1;
					gangs[gangid] -= 1;
					people -= 1;
				}
				else if (randDeath == 2)
				{
					cout << "Przeciwnik lezy martwy (" << randHoodPeople << ") zywych." << endl;
					gangs[choose] -= 1;
					randHoodPeople -= 1;
				}
				if (people <= 0 || guns <= 0 || randHoodPeople <= 0)
				{
					fight = false;
				}
				Sleep(1000);
			}
		}
		cout << "Walka zakonczona!" << endl;
		heatCount += 15;
		respectCount -= 15;
		fbiMission += 10;
		system("pause");
		NewDay();
	}
}

public: void Ammunation()
{
	system("cls");
	int randGunPrice = randNum(500, 3000);
	int choose;
	cout << "Witaj w ammunation!" << endl;
	cout << "Masz w portfelu $" << money << endl;
	cout << "Dzisiejszy koszt kalibru .45 wynosi: $" << randGunPrice << endl;
	cout << "Ile sztuk broni chcesz kupic? (0 aby wyjsc): ";
	cin >> choose;
	if (choose >= 1 && money * choose >= 0)
	{
		cout << "Pomyslnie zakupiles bron." << endl;
		guns += choose;
		money -= choose * randGunPrice;
		Sleep(2000);
		Window();
	}
	else
	{
		Sleep(2000);
		Window();
	}
}

public: void HoodGaming()
{
	system("cls");
	int randHoodAction = randNum(1, 2);
	if (randHoodAction == 1)
	{
		cout << "Tagujecie dzielnice z ziomkami." << endl;
		Sleep(15000);
		heatCount -= 2;
		respectCount += 1;
		system("pause");
		NewDay();
	}
	else if (randHoodAction == 2)
	{
		int choose;
		cout << "Gracie w kostke ze znajomymi." << endl;
		int randPlayers = randNum(1, 3);
		cout << "Graczy: " << randPlayers+1 << " lacznie z Toba." << endl;
		cout << "Masz przy sobie $" << money << " dolarow. Ile obstawiasz? (MIN 100, MAX 1000, aby wyjsc wpisz 0, ma negatywny wplyw): ";
		cin >> choose;
		if (choose > 99 && choose <= 1000 && money >= choose)
		{
			Sleep(1000);
			int randDice = randNum(1, 6);
			int randScore[4];
			if (randPlayers + 1 == 2)
			{
				cout << "Rzucasz jako pierwszy!" << endl;
				Sleep(1000);
				cout << "Ty: " << randDice << endl;
				randScore[0] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "Przeciwnik: " << randDice << endl;
				randScore[1] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "Ty: " << randDice << endl;
				randScore[0] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "Przeciwnik: " << randDice << endl;
				randScore[1] += randDice;
				if (randScore[0] >= randScore[1])
				{
					cout << "Wygrales!" << endl;
					money += choose;
				}
				else if (randScore[0] < randScore[1])
				{
					cout << "Przegrales!" << endl;
					money -= choose;
				}
			}
			if (randPlayers + 1 == 3)
			{
				randDice = randNum(1, 6);
				cout << "Rzucasz jako pierwszy!" << endl;
				Sleep(1000);
				cout << "Ty: " << randDice << endl;
				randScore[0] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "Ty: " << randDice << endl;
				randScore[0] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "1. Przeciwnik: " << randDice << endl;
				randScore[1] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "1. Przeciwnik: " << randDice << endl;
				randScore[1] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "2. Przeciwnik: " << randDice << endl;
				randScore[2] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "2. Przeciwnik: " << randDice << endl;
				randScore[2] += randDice;
				if (randScore[0] >= randScore[1] && randScore[0] >= randScore[2])
				{
					cout << "Wygrales!" << endl;
					money += choose * 2;
				}
				else if (randScore[0] < randScore[1] || randScore[0] < randScore[2])
				{
					cout << "Przegrales!" << endl;
					money -= choose * 2;
				}
			}
			if (randPlayers + 1 == 4)
			{
				randDice = randNum(1, 6);
				cout << "Rzucasz jako pierwszy!" << endl;
				Sleep(1000);
				cout << "Ty: " << randDice << endl;
				randScore[0] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "Ty: " << randDice << endl;
				randScore[0] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "1. Przeciwnik: " << randDice << endl;
				randScore[1] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "1. Przeciwnik: " << randDice << endl;
				randScore[1] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "2. Przeciwnik: " << randDice << endl;
				randScore[2] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "2. Przeciwnik: " << randDice << endl;
				randScore[2] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "3. Przeciwnik: " << randDice << endl;
				randScore[3] += randDice;
				randDice = randNum(1, 6);
				Sleep(1000);
				cout << "3. Przeciwnik: " << randDice << endl;
				randScore[3] += randDice;
				if (randScore[0] >= randScore[1] && randScore[0] >= randScore[2] && randScore[0] >= randScore[3])
				{
					cout << "Wygrales! Premia x4 zamiast x3 za pelny sklad." << endl;
					money += choose * 4;
				}
				else if (randScore[0] < randScore[1] || randScore[0] < randScore[2] || randScore[0] >= randScore[3])
				{
					cout << "Przegrales!" << endl;
					money -= choose * 3;
				}
			}
			randScore[0] = 0;
			randScore[1] = 0;
			randScore[2] = 0;
			randScore[3] = 0;
			respectCount += 5;
			heatCount -= 5;
			Sleep(10000);
			NewDay();
		}
		else
		{
			cout << "Nara, paruwo." << endl;
			respectCount -= 10;
			Sleep(10000);
			NewDay();
		}
	}
}

public: void GangWar()
{
	int randGang = randNum(4, 12);
	int randAction = randNum(1, 2);
	int deadAllies = 0;
	int deadEnemies = 0;

	system("cls");

	if (randGang == gangid) NewDay();
	else
	{
		if (randGang == 4)
		{
			lastAttacker = 4;
			if (randAction == 1)
			{
				int randAttackers = randNum(2, groveCount / 3);
				cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
				Sleep(5000);
				while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
				{
					int randWinner = randNum(1, 2);
					cout << "Trwa strzelanina." << endl;
					Sleep(1000);
					if (randWinner == 1)
					{
						randAttackers -= 1;
						groveCount -= 1;
						deadEnemies += 1;
						cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
					}
					else if (randWinner == 2)
					{
						gangs[gangid] -= 1;
						guns -= 1;
						deadAllies -= 1;
						cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
					}
				}
				if (guns == 0 && randAttackers >= 1)
				{
					int randDeadRest = randNum(1, 5);
					deadAllies -= randDeadRest;
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
				}
				if (randAttackers == 0)
				{
					cout << "Atakujacy zostali zabici!" << endl;
					respectCount += 10;
					heatCount += 5;
				}

				cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
				cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
				cout << "Koniec walki!" << endl;
				system("pause");
				Window();
			}
			else if (randAction == 2)
			{
				cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
				Sleep(5000);
				int randDeadRest = randNum(1, 8);
				gangs[gangid] -= randDeadRest;
				cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
				system("pause");
				Window();
			}

			if (randGang == 5)
			{
				lastAttacker = 5;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, sevilleCount / 3);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							sevilleCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 6)
			{
				lastAttacker = 6;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, templeCount / 3);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							templeCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 7)
			{
				lastAttacker = 7;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, frontCount / 3);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							frontCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 8)
			{
				lastAttacker = 8;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, rollinCount / 3);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							rollinCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 9)
			{
				lastAttacker = 9;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, kiloCount / 3);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							kiloCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 10)
			{
				lastAttacker = 10;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, aztecasCount / 4);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							aztecasCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 11)
			{
				lastAttacker = 11;
				if (randAction == 1)
				{
					int randAttackers = randNum(2, vagosCount / 4);
					cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
					Sleep(5000);
					while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
					{
						int randWinner = randNum(1, 2);
						cout << "Trwa strzelanina." << endl;
						Sleep(1000);
						if (randWinner == 1)
						{
							randAttackers -= 1;
							vagosCount -= 1;
							deadEnemies += 1;
							cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
						}
						else if (randWinner == 2)
						{
							gangs[gangid] -= 1;
							guns -= 1;
							deadAllies -= 1;
							cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
						}
					}
					if (guns == 0 && randAttackers >= 1)
					{
						int randDeadRest = randNum(1, 5);
						deadAllies -= randDeadRest;
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
					}
					if (randAttackers == 0)
					{
						cout << "Atakujacy zostali zabici!" << endl;
						respectCount += 10;
						heatCount += 5;
					}

					cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
					cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
					cout << "Koniec walki!" << endl;
					system("pause");
					Window();
				}
				else if (randAction == 2)
				{
					cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
					Sleep(5000);
					int randDeadRest = randNum(1, 8);
					gangs[gangid] -= randDeadRest;
					cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
					system("pause");
					Window();
				}
			}

			if (randGang == 12)
			{
				lastAttacker = 12;
					if (randAction == 1)
					{
						int randAttackers = randNum(2, rifaCount / 4);
						cout << "Masz wjazd na dzielnice, atakujacy wysiadaja z aut!" << endl;
						Sleep(5000);
						while (guns >= 1 && randAttackers >= 1 && gangs[gangid] >= 1)
						{
							int randWinner = randNum(1, 2);
							cout << "Trwa strzelanina." << endl;
							Sleep(1000);
							if (randWinner == 1)
							{
								randAttackers -= 1;
								rifaCount -= 1;
								deadEnemies += 1;
								cout << "Zabiliscie napastnika! Pozostalo: " << randAttackers << endl;
							}
							else if (randWinner == 2)
							{
								gangs[gangid] -= 1;
								guns -= 1;
								deadAllies -= 1;
								cout << "Zastrzelili ziomka! Atakujacych pozostalo: " << randAttackers << endl;
							}
						}
						if (guns == 0 && randAttackers >= 1)
						{
							int randDeadRest = randNum(1, 5);
							deadAllies -= randDeadRest;
							gangs[gangid] -= randDeadRest;
							cout << "Zabitych zostalo: " << randDeadRest << " twoich gangsterow!" << endl;
						}
						if (randAttackers == 0)
						{
							cout << "Atakujacy zostali zabici!" << endl;
							respectCount += 10;
							heatCount += 5;
						}

						cout << "Zabitych zostalo: " << deadAllies << " gangsterow z twojego osiedla." << endl;
						cout << "Zabitych zostalo: " << deadEnemies << " gangsterow atakujacych." << endl;
						cout << "Koniec walki!" << endl;
						system("pause");
						Window();
					}
					else if (randAction == 2)
					{
						cout << "Masz wjazd na dzielnice, atakujacy robia drive-by!" << endl;
						Sleep(5000);
						int randDeadRest = randNum(1, 8);
						gangs[gangid] -= randDeadRest;
						cout << "Zabitych zostalo: " << randDeadRest << " gangsterow z twojego osiedla." << endl;
						system("pause");
						Window();
					}
			}
		}
	}
}

public: void Corner()
{
	int choose;
	if (drugs >= 1)
	{
		cout << "Witaj na Twoim lokalnym krzeselku. Uwazaj jednak, jezeli nie masz broni mozesz zginac." << endl;
		while (drugs != 0) 
		{
			int randDrugSell = randNum(1000, 3000);
			int randDrugPrice = randNum(120, 200);
			cout << "Proces sprzedazy narkotyku w toku..." << endl;
			Sleep(randDrugSell);
			cout << "Podchodzi do Ciebie klient i w zamian za gram oferuje Ci $" << randDrugPrice << endl;
			Sleep(1000);
			int randDrugScenario = randNum(1, 100);
			if (randDrugScenario <= 85)
			{
				cout << "Pomyslnie sprzedales towar!" << endl;
				money += randDrugPrice;
				drugs -= 1;
				cout << "Kontynuowac? (tak = 1/nie = 2): ";
				cin >> choose;
				if (choose == 2) NewDay();
				if (choose == 1) system("cls");
			}
			else if (randDrugScenario > 85 && randDrugScenario < 90)
			{
				int randDrugHighPrice = randNum(1000, 10000);
				cout << "Podchodzi do Ciebie bogaty typeczek i oferuje za gram $" << randDrugHighPrice << endl;
				Sleep(1000);
				cout << "Pomyslnie sprzedales towar!" << endl;
				money += randDrugSell;
				drugs -= 1;
				cout << "Kontynuowac? (tak = 1/nie = 2): ";
				cin >> choose;
				if (choose == 2) NewDay();
				if (choose == 1) system("cls");
			}
			else if (randDrugScenario > 90 && randDrugScenario < 95)
			{
				cout << "Podjezdza nieoznakowany szeryf, zaczyna Cie scigac!" << endl;
				heatCount += 5;
				deaMission += 10;
				Chase();
			}
			else if (randDrugScenario > 95 && randDrugScenario < 100)
			{
				if (guns >= 1)
				{
					int randDeathAccident = randNum(1, 2);
					cout << "Rozpoczyna sie strzelanina miedzy gangsterami z wrogich dzielnic!" << endl;
					Sleep(5000);
					if (randDeathAccident == 1)
					{
						cout << "Twoj czlowiek ginie na ulicy i gubi narkotyki." << endl;
						heatCount -= 5;
						guns -= 1;

						drugs = 0;
						gangs[gangid] -= 1;
						system("pause");
						NewDay();
					}
					else if (randDeathAccident == 2)
					{
						int randGang = randNum(1, 2);
						int randDeath = randNum(4, 15);
						cout << "Twoj czlowiek wygral pojedynek ze skurwysynem i ucieka." << endl;
						heatCount += 10;
						guns += 1;
						fbiMission += 2;
						gangs[randGang] -= randDeath;
						system("pause");
						NewDay();
					}
				}
				else
				{
					cout << "Twoj czlowiek ginie na ulicy i gubi narkotyki." << endl;
					heatCount -= 5;
					guns -= 1;
					drugs = 0;
					gangs[gangid] -= 1;
					system("pause");
					NewDay();
				}
			}
		}
		NewDay();
	}

	else
	{
		cout << "Nie masz przy sobie narkotykow na sprzedaz." << endl;
		system("pause");
		Window();
	}
}

public: void CarDealer()
{
	int choose;
	system("cls");
	cout << "Witaj w salonie, masz w portfelu $" << money << endl;
	cout << "Aby zakupic wpisz cyfre pojazdu." << endl;
	cout << "=====POJAZDY=====" << endl;
	cout << "1. Broadway $50,000 (-0 Robota, -0 Wjazd, +Dziwki" << endl;
	cout << "2. Buccaneer $1,000 (-5s Robota, -0s Wjazd)" << endl;
	cout << "3. Greenwood $3,000 (-5s Robota, -10s Wjazd)" << endl;
	cout << "4. Picador $5,000 (-15s Robota, -5s Wjazd)" << endl;
	cout << "5. Solair $8,000 (-10s Robota, -20s Wjazd)" << endl;
	cout << "6. Sanchez $15,000 (-30s Robota, -0s Wjazd)" << endl;
	cout << "7. Sunrise $15,000 (-15s Robota, -30s Wjazd)" << endl;
	cout << "8. Elegy $30,000 (-45s Robota, -15s Wjazd)" << endl;
	cout << "9. Sultan $40,000 (-35s Robota, -50s Wjazd)" << endl;
	cout << "10. Bullet $70,000 (-55s Robota, -25s Wjazd)" << endl;
	cout << "11. Huntley $75,000 (-40s Robota, -60s Wjazd)" << endl;
	cout << "12. Cheetah $150,000 (-60s Robota, -40s Wjazd)" << endl;
	cout << "13. Turismo $300,000 (-60s Robota, -50s Wjazd)" << endl;
	cout << "14. Infernus $1,000,000 (-60s Robota, -60s Wjazd)" << endl;
	cout << "Wybor (exit aby wyjsc): ";
	cin >> choose;

	if (choose == 1)
	{
		if (money >= 50000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "broadway";
			money -= 50000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 2)
	{
		if (money >= 1000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "buccaneer";
			money -= 1000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 3)
	{
		if (money >= 3000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "greenwood";
			money -= 3000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 4)
	{
		if (money >= 5000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "picador";
			money -= 5000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 5)
	{
		if (money >= 8000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "solair";
			money -= 8000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 6)
	{
		if (money >= 15000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "sanchez";
			money -= 15000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 7)
	{
		if (money >= 30000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "sunrise";
			money -= 30000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 8)
	{
		if (money >= 40000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "sultan";
			money -= 40000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 9)
	{
		if (money >= 70000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "bullet";
			money -= 70000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 10)
	{
		if (money >= 75000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "huntley";
			money -= 75000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 11)
	{
		if (money >= 150000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "cheetah";
			money -= 150000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 12)
	{
		if (money >= 300000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "turismo";
			money -= 300000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
	if (choose == 13)
	{
		if (money >= 1000000)
		{
			cout << "Zakupiles pojazd!" << endl;
			ownedCar = "infernus";
			money -= 1000000;
			system("pause");
			NewDay();
		}
		else
		{
			Window();
		}
	}
}

public: void Bank()
{
	system("cls");
	int choose, credit;
	cout << "Witaj w banku!" << endl;
	cout << "Forsa w portfelu: $" << money << endl;
	cout << "Saldo: $" << moneyBank << endl;
	cout << "[1] Wplata" << endl;
	cout << "[2] Wyplata" << endl;
	cout << "[3] Wyjdz" << endl;
	cout << "Wybierz akcje: ";
	cin >> choose;
	if (choose == 1)
	{
		cout << "Ile chcesz wplacic?: " << endl;
		cin >> credit;
		if (credit > money)
		{
			cout << "Nie masz tyle pieniedzy, error!" << endl;
			system("pause");
			Bank();
		}
		else if (credit <= money)
		{
			cout << "Transfer gotowki w toku." << endl;
			Sleep(1000);
			cout << "Gotowe, pieniadze sa na Twoim koncie." << endl;
			money -= credit;
			moneyBank += credit;
			deaMission += 1;
			fbiMission += 1;
			system("pause");
			Window();
		}
	}
	else if (choose == 2)
	{
		cout << "Ile chcesz wyplacic?: " << endl;
		cin >> credit;
		if (credit > moneyBank)
		{
			cout << "Nie masz tyle pieniedzy, error!" << endl;
			system("pause");
			Bank();
		}
		else if (credit <= money)
		{
			cout << "Transfer gotowki w toku." << endl;
			Sleep(1000);
			cout << "Gotowe, pieniadze sa w Twoim portfelu." << endl;
			moneyBank -= credit;
			money -= credit;
			system("pause");
			Window();
		}
	}
	else if (choose == 3)
	{
		cout << "Opuszczasz bank." << endl;
		system("pause");
		Window();
	}
}

public: void Chase()
{
	srand(time(0));
	int chaseRand[4]; string choose;
	chaseRand[0] = randNum(1, 2); //1 skret
	chaseRand[1] = randNum(1, 2); //2 skret
	cout << "Goni Cie LSPD!" << endl;
	if (ownedCar == "") cout << "Poscig pieszy!" << endl;
	else cout << "Poscig!" << endl;
	cout << "Skrecasz w lewo, czy prawo?: " << endl;
	cin >> choose;
	if (choose == "lewo" && chaseRand[0] == 1)
	{
		choose = "";
		cout << "Skrecasz w lewo, czy prawo?: " << endl;
		cin >> choose;
		if (choose == "lewo" && chaseRand[1] == 1)
		{
			choose = "";
			cout << "Uciekasz im!" << endl;
			system("pause");
			NewDay();
		}
		else if (choose == "lewo" && chaseRand[1] == 2)
		{
			money -= robMoney;
			Prison();
		}
		else if (choose == "prawo" && chaseRand[1] == 1)
		{
			money -= robMoney;
			Prison();
		}
		else if (choose == "prawo" && chaseRand[1] == 2)
		{
			choose = "";
			cout << "Uciekasz im!" << endl;
			system("pause");
			NewDay();
		}
	} 
	else if (choose == "prawo" && chaseRand[0] == 2)
	{
		choose = "";
		cout << "Skrecasz w lewo, czy prawo?: " << endl;
		cin >> choose;
		if (choose == "lewo" && chaseRand[1] == 1)
		{
			choose = "";
			cout << "Uciekasz im!" << endl;
			system("pause");
			NewDay();
		}
		else if (choose == "lewo" && chaseRand[1] == 2)
		{
			money -= robMoney;
			Prison();
		}
		else if (choose == "prawo" && chaseRand[1] == 1)
		{
			money -= robMoney;
			Prison();
		}
		else if (choose == "prawo" && chaseRand[1] == 2)
		{
			choose = "";
			cout << "Uciekasz im!" << endl;
			system("pause");
			NewDay();
		}
	}
	
	else if (choose == "lewo" && chaseRand[0] == 2)
	{
		money -= robMoney;
		Prison();
	}

	else if (choose == "prawo" && chaseRand[0] == 1)
	{
		money -= robMoney;
		Prison();
	}

}

public: void Prison()
{
	srand(time(0));
	int prisonRand[2];
	prisonRand[0] = randNum(1, 2); //narkotyki
	prisonRand[1] = randNum(1, 2); //bron
	cout << "Gliny Cie zlapaly!" << endl;
	cout << "Idziesz do Department of Corrections. Trwa przeszukiwanie." << endl;
	Sleep(5000);
	if (prisonRand[0] == 1 && drugs >= 1)
	{
		cout << "Straznicy znalezli przy Tobie narkotyki i je skonfiskowali. Trwa przeszukiwanie." << endl;
		drugs = 0;
	}
	else if (prisonRand[0] == 2)
	{
		cout << "Straznicy nie znalezli przy Tobie narkotykow. Trwa przeszukiwanie." << endl;
	}
	Sleep(5000);
	if (prisonRand[1] == 1 && guns >= 1)
	{
		cout << "Straznicy znalezli przy Tobie bron i ja skonfiskowali. Idziesz siedziec (trzy minuty)." << endl;
		guns = 0;
	}
	else if (prisonRand[1] == 2)
	{
		cout << "Straznicy nie znalezli przy Tobie broni. Idziesz siedziec (trzy minuty)." << endl;
	}
	if (ownedCar != "")
	{
		string choose;
		cout << "Twoj pojazd zostal skonfiskowany! Masz przy sobie $" << money << ". Czy chcesz go wykupic za $3000? (tak/nie): ";
		if (choose == "tak") money -= 3000;
		else if (choose == "nie")
		{
			cout << "Pojazd zostal skonfiskowany." << endl;
			ownedCar = "";
		}
		else
		{
			cout << "Pojazd zostal skonfiskowany." << endl;
			ownedCar = "";
		}
	}
	cout << "Zostalo Ci piec lat wyroku (3 minuty)." << endl;
	Sleep(60000);
	cout << "Zostaly Ci trzy lata wyroku (2 minuty)." << endl;
	Sleep(60000);
	cout << "Zostal Ci rok wyroku (minuta)." << endl;
	Sleep(60000);
	system("pause");
	NewDay();
}

public: void Work()
	{
		srand(time(0));
		int missionWork = randNum(1, 2);
		system("cls");
		cout << "Jedziesz na robote! Im gorsze auto lub jego brak, tym wolniejsze wykonanie." << endl;
		if (ownedCar == "")
		{
			Sleep(60000);
		}
		else if (ownedCar == "broadway" || "hustler") Sleep(60000);
		else if (ownedCar == "buccaneer") Sleep(55000);
		else if (ownedCar == "greenwood") Sleep(55000);
		else if (ownedCar == "picador") Sleep(45000);
		else if (ownedCar == "solair") Sleep(50000);
		else if (ownedCar == "sanchez") Sleep(30000);
		else if (ownedCar == "elegy") Sleep(15000);
		else if (ownedCar == "sultan") Sleep(25000);
		else if (ownedCar == "bullet") Sleep(5000);
		else if (ownedCar == "huntley") Sleep(20000);
		else if (ownedCar == "cheetah") Sleep(1);
		else if (ownedCar == "turismo") Sleep(1);
		else if (ownedCar == "infernus") Sleep(1);

		if (missionWork == 1) //NAPAD NA DOM
		{
			int fullHouse = randNum(0, 2);
			int houseCivilians = randNum(1, 8);
			int policeChance = randNum(1, 100);
			int robMoney = randNum(500, 7000);
			int fight = randNum(1, 100);
			string infoHouse;
			int choose;
			if (fullHouse == 0)
			{
				infoHouse = "pusty!";
				cout << "Wlamujesz sie do domu, ktory jest: " << infoHouse << endl;
				Sleep(2000);
				cout << "Okradasz mieszkanie i uciekasz!" << endl;
				if (policeChance >= 1 && policeChance <= 20)
				{
					money += robMoney;
					Chase();
				}
				money += robMoney;
				heatCount += 1;
				respectCount += 5;
				system("pause");
				NewDay();
			}
			else if (fullHouse == 1) 
			{
				infoHouse = "pelny!";
				cout << "W srodku jest " << houseCivilians << " osob." << endl;
				cout << "Wlamujesz sie do domu, ktory jest: " << infoHouse << endl;
				cout << "[1] Zastrzel ich i okradnij (wymagana minimum 1 bron na kazdego obywatela)." << endl;
				cout << "[2] Pobij ich i okradnij" << endl;
				cout << "[3] Uciekaj!" << endl;
				cout << "Co robisz?: ";
				cin >> choose;
				if (choose == 1)
				{
					if (guns >= houseCivilians)
					{
						cout << "Zabiles wszystkich i uciekasz z miejsca zdarzenia!" << endl;
						if (policeChance >= 1 && policeChance <= 20)
						{
							fbiMission += 5;
							heatCount += 10;
							respectCount -= 5;
							money += robMoney;
							system("pause");
							Chase();
						}
						
						fbiMission += 5;
						heatCount += 5;
						money += robMoney;
						system("pause");
						NewDay();
					}
					else
					{
						cout << "Nie masz tyle gnatow, uciekasz!" << endl;
						system("pause");
						NewDay();
					}
				}
				else if (choose == 2)
				{
					cout << "Bijesz sie z ludzmi!" << endl;
					Sleep(5000);
					if (fight > 50)
					{
						cout << "Zawijasz kase i uciekasz z miejsca zdarzenia." << endl;
						heatCount += 3;
						respectCount += 10;
						money += robMoney;
						system("pause");
						NewDay();
					}
					else
					{
						cout << "Zbieraja cie z pola walki, rabusiu." << endl;
						heatCount += 10;
						respectCount -= 3;
						system("pause");
						NewDay();
					}
				}
				else if (choose == 3)
				{
					cout << "Uciekasz!" << endl;
					system("pause");
					NewDay();
				}
			}
			else
			{
				cout << "dupa" << endl;
			}
			system("pause");
			Window();
		}
		if (missionWork == 2) //KROJENIE CZARNUCHOW
		{
			int randIncident = randNum(0, 3);
			int randDrugs = randNum(0, 15);
			int randGun = randNum(1, 2);
			int randMoney = randNum(100, 1000);
			if (randIncident == 0)
			{
				cout << "Widzisz osobe idaca chodnikiem, wyglada dosyc normalnie." << endl;
				cout << "Podchodzisz do niej probujac ja okrasc." << endl;
				Sleep(5000);
				cout << "Okradasz osobe i uciekasz z miejsca zdarzenia!" << endl;
				if (randDrugs >= 1) cout << "Znalazles przy osobie " << randDrugs << "g heroiny." << endl;
				if (randGun == 1) cout << "Znalazles przy osobie bron!" << endl;
				cout << "Znalazles przy osobie $" << randMoney << endl;
				drugs += randDrugs;
				guns += randGun;
				money += randMoney;
				heatCount += 3;
				respectCount += 1;
				fbiMission += 1;
				system("pause");
				NewDay();
			}
			else if (randIncident == 1)
			{
				cout << "Widzisz osobe idaca chodnikiem, wyglada dosyc normalnie." << endl;
				cout << "Podchodzisz do niej probujac ja okrasc." << endl;
				Sleep(5000);
				cout << "Okradasz osobe i uciekasz z miejsca zdarzenia!" << endl;
				if (randDrugs >= 1) cout << "Znalazles przy osobie " << randDrugs << "g heroiny." << endl;
				if (randGun == 1) cout << "Znalazles przy osobie bron!" << endl;
				cout << "Znalazles przy osobie $" << randMoney << endl;
				cout << "Zaczyna gonic cie LSPD!" << endl;
				drugs += randDrugs;
				guns += randGun;
				money += randMoney;
				heatCount += 5;
				respectCount -= 3;
				fbiMission += 2;
				system("pause");
				Chase();
			}
			else if (randIncident == 2)
			{
				cout << "Widzisz osobe w zaulku, prawdopodobnie gangstera." << endl;
				cout << "Podchodzisz do niej probujac ja okrasc." << endl;
				Sleep(5000);
				cout << "Okradasz osobe i uciekasz z miejsca zdarzenia!" << endl;
				if (randDrugs >= 1) cout << "Znalazles przy osobie " << randDrugs << "g heroiny." << endl;
				if (randGun == 1) cout << "Znalazles przy osobie bron!" << endl;
				cout << "Znalazles przy osobie $" << randMoney << endl;
				cout << "Zaczyna gonic cie LSPD!" << endl;
				drugs += randDrugs;
				guns += randGun;
				money += randMoney;
				heatCount += 5;
				respectCount -= 3;
				fbiMission += 2;
				system("pause");
				Chase();
			}
			else if (randIncident == 3)
			{
				int randDeath = randNum(1, 100);
				cout << "Widzisz osobe w zaulku, prawdopodobnie gangstera." << endl;
				cout << "Podchodzisz do niej probujac ja okrasc." << endl;
				Sleep(5000);
				cout << "Rozpoczyna sie strzelanina!" << endl;
				if (randDeath <= 20)
				{
					cout << "Twoj zolnierz poniosl smierc." << endl;
					system("pause");
					NewDay();
				}
				if (randDrugs >= 1) cout << "Znalazles przy osobie " << randDrugs << "g heroiny." << endl;
				if (randGun == 1) cout << "Znalazles przy osobie bron!" << endl;
				cout << "Znalazles przy osobie $" << randMoney << endl;
				cout << "Uciekasz z miejsca zdarzenia." << endl;
				heatCount += 10;
				respectCount -= 10;
				fbiMission += 5;
				deaMission += 5;
				system("pause");
				NewDay();
			}
		}
	}

public: void Window()
	{
		lspdCount = gangs[0];
		lssdCount = gangs[1];
		fbiCount = gangs[2];
		deaCount = gangs[3];
		groveCount = gangs[4];
		sevilleCount = gangs[5];
		templeCount = gangs[6];
		frontCount = gangs[7];
		rollinCount = gangs[8];
		kiloCount = gangs[9];
		aztecasCount = gangs[10];
		vagosCount = gangs[11];
		rifaCount = gangs[12];
		triadsCount = gangs[13];
		nangCount = gangs[14];
		mafiaCount = gangs[15];
		string lastAttack;
		if (lastAttacker == 0) lastAttack = "";
		if (lastAttacker == 4) lastAttack = "Grove Street Families";
		if (lastAttacker == 5) lastAttack = "Seville Boulevard Families";
		if (lastAttacker == 6) lastAttack = "Temple Drive Families";
		if (lastAttacker == 7) lastAttack = "Front Yard Ballas";
		if (lastAttacker == 8) lastAttack = "Rollin' Heights Ballas";
		if (lastAttacker == 9) lastAttack = "Kilo Tray Ballas";
		if (lastAttacker == 10) lastAttack = "Varrios Los Aztecas";
		if (lastAttacker == 11) lastAttack = "Los Santos Vagos";
		if (lastAttacker == 12) lastAttack = "San Fierro Rifa";
		int choose;
		robMoney = 0;
		system("cls");
		cout << "=====STATYSTYKI ORGANIZACJI PORZADKOWYCH=====" << endl;
		cout << "[0] Los Santos Police Department: " << lspdCount << endl;
		cout << "[1] Los Santos County Sheriff's Department: " << lssdCount << endl;
		cout << "[2] Federal Bureau of Investigation: " << fbiCount << endl;
		cout << "[3] Drug Enforcment Administration: " << deaCount << endl;
		cout << "=====STATYSTYKI MALYCH SETOW=====" << endl;
		cout << "[4] (GROVE) Grove Street Families: " << groveCount << endl;
		cout << "[5] (GROVE) Seville Boulevard Families: " << sevilleCount << endl;
		cout << "[6] (GROVE) Temple Drive Families: " << templeCount << "               =====TWOJE STATYSTYKI=====" << endl;
		cout << "[7] (BALLAS) Front Yard Ballas: " << frontCount << "               Nick: " << nickname << endl;
		cout << "[8] (BALLAS) Rollin' Heights Ballas: " << rollinCount << "               Forsa: $" << money << " | Bank: $" << moneyBank << endl;
		cout << "[9] (BALLAS) Kilo Tray Ballas: " << kiloCount << "               Bronie: " << guns << endl;
		cout << "=====STATYSTYKI GANGOW=====" << "               Dragi: " << drugs << endl;
		cout << "[10] Varrios Los Aztecas: " << aztecasCount << "               Gang: " << gangName << endl;
		cout << "[11] Los Santos Vagos: " << vagosCount <<  "               Pojazd: " << ownedCar << endl;
		cout << "[12] San Fierro Rifa: " << rifaCount << "               Heat: " << heatCount << endl;
		cout << "=====STATYSTYKI MAFII=====" <<  "               Respekt: " << respectCount << endl;
		cout << "[13] San Fierro Triads: " << triadsCount << "               FBI: " << fbiMission << "%" << endl;
		cout << "[14] Da Nang Boys: " << nangCount <<  "               DEA: " << deaMission << "%" << endl;
		cout << "[15] Las Venturas Mafia: " << mafiaCount << "               Ostatni wjazd przez gang: " << lastAttack << endl;
		cout << "=====OPCJE=====" << endl;
		cout << "[1] Robota" << endl;
		cout << "[2] Corner" << endl;
		cout << "[3] Bank" << endl;
		cout << "[4] Hoodgaming" << endl;
		cout << "[5] Salon" << endl;
		cout << "[6] Ammunation" << endl;
		cout << "[7] Wjazd" << endl;
		cout << "Wybieram: "; cin >> choose;
		cout << endl;
		if (choose == 1)
		{
			Work();
		}
		if (choose == 2)
		{
			Corner();
		}
		if (choose == 3)
		{
			Bank();
		}
		if (choose == 4)
		{
			HoodGaming();
		}
		if (choose == 5)
		{
			CarDealer();
		}
		if (choose == 6)
		{
			Ammunation();
		}
		if (choose == 7)
		{
			Attack();
		}
		system("pause");
	}

public: void NewDay()
	{
		srand(time(0));
		system("cls");
		int randRespect = randNum(1, 100);
		int randDeath = randNum(1, 5);
		int randHeat = randNum(50, 100);
		int randDealer = randNum(1, 100);
		int randDrugs = randNum(1, 50);
		int randDrugsPrice = randNum(45, 100);
		int randDeath2 = randNum(1, 5);
		int randDeath3 = randNum(1, 5);
		int randDeath4 = randNum(1, 5);
		int randGang = randNum(4, 15);
		int randGang2 = randNum(4, 15);
		int randGang3 = randNum(4, 15);
		if (randGang == gangid) randDeath2 = 0;
		if (randGang2 == gangid) randDeath3 = 0;
		if (randGang3 == gangid) randDeath4 = 0;
		robMoney = 0;

		gangs[randGang] -= randDeath2;
		gangs[randGang2] -= randDeath3;
		gangs[randGang3] -= randDeath4;

		if (moneyBank > 0)
		{
			int moneyPercentage = randNum(1, 50);
			moneyPercentage /= 10;
			moneyBank *= moneyPercentage;
		}

		if (randRespect - 25 > randDealer)
		{
			int choose, randCop = randNum(1, 100);
			cout << "W miescie pojawil sie dealer amfetaminy." << endl;
			cout << "Ma przy sobie " << randDrugs << "g narkotyku." << endl;
			cout << "Masz przy sobie $" << money << endl;
			cout << "Cena za gram wynosi $" << randDrugsPrice << endl;
			cout << "Jezeli chcesz kupic wpisz ilosc gramow: ";
			cin >> choose;
			if (choose*randDrugsPrice <= money && randDrugs <= choose)
			{
				cout << "Pomyslnie kupiles towar." << endl;
				Sleep(2000);
				if (randCop >= 85)
				{
					cout << "Szeryf zauwazyl transakcje i zaczal sie poscig wraz z jednostka LSPD." << endl;
					Sleep(5000);
					Chase();
				}
				system("pause");
			}
			else
			{
				cout << "Nie udalo Ci sie kupic towaru." << endl;
				system("pause");
			}

		}

		if (heatCount == 0 && money + moneyBank > 5000000 && gangs[gangid] > 0)
		{
			gameOver();
		}

		if (gangs[gangid] <= 0)
		{
			gangs[gangid] = 0;
			gameOver();
		}

		if (randHeat <= heatCount)
		{
			int randPrison = randNum(5, 30);
			gangs[gangid] -= randPrison;
			cout << randPrison << " - wlasnie tylu czlonkow Twojego gangu zostalo posadzonych w zwiazku z wjazdem LSPD na wasza dzielnice." << endl;
			cout << "Oprocz tego tracisz wszystkie gnaty i narkotyki." << endl;
			drugs = 0;
			guns = 0;
			heatCount = 0;
			system("pause");
			Window();
		}

		if (fbiMission >= 100)
		{
			cout << "Twoja grupa przestepcza zostala rozbita przez FBI! Wszyscy idziecie siedziec. Gra skonczona!" << endl;
			gameOver();
		}

		if (deaMission >= 100)
		{
			cout << "Twoja grupa przestepcza zostala rozbita przez DEA! Wszyscy idziecie siedziec. Gra skonczona!" << endl;
			gameOver();
		}

		if (respectCount >= randRespect)
		{
			cout << "Twoj turf nie zostal dzisiaj zaatakowany, wszyscy zyja!" << endl;
			system("pause");
			Window();
		}
		else
		{
			GangWar();
		}
		groveCount = gangs[4];
		sevilleCount = gangs[5];
		templeCount = gangs[6];
		frontCount = gangs[7];
		rollinCount = gangs[8];
		kiloCount = gangs[9];
		aztecasCount = gangs[10];
		vagosCount = gangs[11];
		rifaCount = gangs[12];
		Window();
	}
		
public: void gameOver()
	{
		system("cls");
		cout << "=====STATYSTYKI KONCOWE=====" << endl;
		cout << "Nick: " << nickname << endl;
		cout << "Forsa: $" << money << " | Bank: $" << moneyBank << endl;
		cout << "Bronie: " << guns << endl;
		cout << "Dragi: " << drugs << endl;
		cout << "Gang: " << gangName << endl;
		cout << "Pojazd: " << ownedCar << endl;
		cout << "Heat: " << heatCount << endl;
		cout << "Respekt: " << respectCount << endl;
		cout << "FBI: " << fbiMission << "%" << endl;
		cout << "DEA: " << deaMission << "%" << endl;
		cout << "=====STATYSTYKI KONCOWE GANGOW i FRAKCJI=====" << endl;
		cout << "Los Santos Police Department: " << lspdCount << endl;
		cout << "Los Santos County Sheriff's Department: " << lssdCount << endl;
		cout << "Federal Bureau of Investigation: " << fbiCount << endl;
		cout << "Drug Enforcment Administration: " << deaCount << endl;
		cout << "(GROVE) Grove Street Families: " << groveCount << endl;
		cout << "(GROVE) Seville Boulevard Families: " << sevilleCount << endl;
		cout << "(GROVE) Temple Drive Families: " << templeCount << endl;
		cout << "(BALLAS) Front Yard Ballas: " << frontCount << endl;
		cout << "(BALLAS) Rollin' Heights Ballas: " << rollinCount << endl;
		cout << "(BALLAS) Kilo Tray Ballas: " << kiloCount << endl;
		cout << "Varrios Los Aztecas: " << aztecasCount << endl;
		cout << "Los Santos Vagos: " << vagosCount << endl;
		cout << "San Fierro Rifa: " << rifaCount << endl;
		cout << "San Fierro Triads: " << triadsCount << endl;
		cout << "Da Nang Boys: " << nangCount << endl;
		cout << "Las Venturas Mafia: " << mafiaCount << endl;
		Sleep(5000);
		system("pause");
		gameMain();
	}

public: void gameStart()
	{
		srand(time(0));
		system("cls");
		int randGang = randNum(1, 9);
		switch (randGang)
		{
		case 1: gangName = "Grove Street Families"; gangid = 4; break;
		case 2: gangName = "Seville Boulevard Families"; gangid = 5; break;
		case 3: gangName = "Temple Drive Families"; gangid = 6; break; 
		case 4: gangName = "Front Yard Ballas"; gangid = 7; break;
		case 5: gangName = "Rollin' Heights Ballas"; gangid = 8; break;
		case 6: gangName = "Kilo Tray Ballas"; gangid = 9; break;
		case 7: gangName = "Varrios Los Aztecas"; gangid = 10; break;
		case 8: gangName = "Los Santos Vagos"; gangid = 11; break;
		case 9: gangName = "San Fierro Rifa"; gangid = 12; break;
		}
		cout << "Dowodzisz gangiem: " << gangName << endl;
		system("pause");
		NewDay();
	}

public: void gameMain()
	{
		gangs[0] = lspdCount;
		gangs[1] = lssdCount;
		gangs[2] = fbiCount;
		gangs[3] = deaCount;
		gangs[4] = groveCount;
		gangs[5] = sevilleCount;
		gangs[6] = templeCount;
		gangs[7] = frontCount;
		gangs[8] = rollinCount;
		gangs[9] = kiloCount;
		gangs[10] = aztecasCount;
		gangs[11] = vagosCount;
		gangs[12] = rifaCount;
		gangs[13] = triadsCount;
		gangs[14] = nangCount;
		gangs[15] = mafiaCount;

		system("cls");
		cout << "Witaj w LSGW v2!" << endl;
		cout << "Aby wygrac gre musisz zdobyc lacznie $5,000,000 i nie byc poszukiwanym przez LSPD." << endl;
		cout << "Podaj prosze swoja nazwe: ";
		cin >> nickname;
		Sleep(1000);
		system("pause");
		gameStart();
	}
};

int main()
{
	srand(time(0));
	MyClass().gameMain();
}

