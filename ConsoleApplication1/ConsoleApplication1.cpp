﻿#include "pch.h"
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
int money = 0, moneyBank = 0, drugs = 0, guns = 0, fbiMission = 0, deaMission = 0, heatCount = 0, respectCount = 50, gangid, gangs[16], lspdCount = 100, lssdCount = 50, fbiCount = 40, deaCount = 20, groveCount = 50, sevilleCount = 50, templeCount = 50, frontCount = 50, rollinCount = 50, kiloCount = 50, aztecasCount = 150, vagosCount = 150, rifaCount = 150, triadsCount = 50, nangCount = 50, mafiaCount = 30;

int randNum(int min, int max)
{
	srand(time(0));
	return rand() % max + min;
}

class MyClass {
	friend void Work();
	friend void Window();
	friend void NewDay();
	friend void gameStart();
	friend void Chase();

public: void Chase()
{
	
}

public: void Work()
	{
		int missionWork = randNum(0, 2);
		system("cls");
		cout << "Jedziesz na robote! Im gorsze auto lub jego brak, tym wolniejsze wykonanie." << endl;
		if (ownedCar == "")
		{
			Sleep(1);
		}

		if (missionWork >= 0 && missionWork <= 2)
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
				cout << "[1] Zastrzel ich i okradnij(wymagana minimum 1 bron na kazdego obywatela)." << endl;
				cout << "[2] Pobij ich i okradnij" << endl;
				cout << "[3] Uciekaj!" << endl;
				cout << "Co robisz?";
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
		int choose;
		system("cls");
		cout << "=====TWOJE STATYSTYKI=====" << endl;
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
		cout << "=====STATYSTYKI GANGOW i FRAKCJI=====" << endl;
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
		cout << "=====OPCJE=====" << endl;
		cout << "[1] Robota" << endl;
		cout << "[2] Corner" << endl;
		cout << "[3] Bank" << endl;
		cout << "[4] Corner" << endl;
		cout << "Wybieram: "; cin >> choose;
		cout << endl;
		if (choose == 1)
		{
			Work();
		}
		system("pause");
	}

public: void NewDay()
	{
		system("cls");
		int randRespect = randNum(1, 100);
		int randDeath = randNum(1, 5);
		int randHeat = randNum(50, 100);
		int randDeath2 = randNum(1, 5);
		int randDeath3 = randNum(1, 5);
		int randDeath4 = randNum(1, 5);
		int randGang = randNum(4, 15);
		int randGang2 = randNum(4, 15);
		int randGang3 = randNum(4, 15);
		if (randGang == gangid) randDeath2 = 0;
		if (randGang2 == gangid) randDeath3 = 0;
		if (randGang3 == gangid) randDeath4 = 0;

		gangs[randGang] -= randDeath2;
		gangs[randGang2] -= randDeath3;
		gangs[randGang3] -= randDeath4;

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
			system("pause");
		}

		if (deaMission >= 100)
		{
			cout << "Twoja grupa przestepcza zostala rozbita przez DEA! Wszyscy idziecie siedziec. Gra skonczona!" << endl;
			system("pause");
		}

		if (respectCount >= randRespect)
		{
			cout << "Twoj turf nie zostal dzisiaj zaatakowany, wszyscy zyja!" << endl;
			system("pause");
			Window();
		}
		else
		{
			cout << "Wrogi gang wjechal na Twoja dzielnice, " << randDeath << " osob zginelo!" << endl;
			for (int x = 4; x < 12; x++)
			{

				if (gangid == x) {
					gangs[x] -= randDeath;
				}
			}
			system("pause");
			Window();
		}
	}

public: void gameStart()
	{
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
};

int main()
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

	cout << "Witaj w LSGW v2!" << endl;
	cout << "Podaj prosze swoja nazwe: ";
	cin >> nickname;
	Sleep(1000);
	system("pause");
	MyClass().gameStart();
}
