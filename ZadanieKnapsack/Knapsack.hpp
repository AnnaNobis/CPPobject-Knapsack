#pragma once

struct Item
{
	int weight; //kg
	int value;

};

class Shop
{
	Item items[10];

public:
	Shop();
	Item steal(int index);
	Item peak(int index); // zajrzyj - sprawdŸ // nie zabieraj ze sklepu 
};


class Backpack
{
	const int capacity; //15kg
	Item stolen[10];

public:
	Backpack(int capacity);
	int calculateCurrentValue();
	int put(Item item); // zwraca ile miejsca zosta³o w plecaku


};

class Robber
{
	Backpack backpack; // plecak powinien byæ skonstruowany w kostruktorze 
	
public:
	
	Robber(int capacity); //zainicjalizowaæ plecak odpowiednia pojemnoscia
	void robWhatever(Shop& shop); //logika 1  //sklep powinien byæ przekazany do z³odzieja
//void robRandom(); //losowo
//void robGreedy(); //logika 2
int getValue();

};


