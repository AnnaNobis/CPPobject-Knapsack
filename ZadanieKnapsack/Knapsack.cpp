#include "Knapsack.hpp"
#include <iostream>
#include <random>


Robber::Robber(int capacity) : backpack (capacity){}
{
	const int capacity = 15;
	


}

Shop::Shop()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>distr(0, 15);
    
    
  
    for (int i = 0; i < 10; ++i)

    {
        items[i].weight = distr(gen);
        items[i].value = distr(gen);
       
    }

}

Item Shop::steal(int index)
{
    Item result;
    result.value = items[index].value;
    result.weight = items[index].weight;

    items[index].value = 0;
    items[index].weight = 0;

    return Item();
}


std::ostream& operator <<(std::ostream& s, const Backpack& b)
{

    Item* items = b.getItems();
    s << "Backpack: " << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        s << items[i]value << " " << items[i].weight;

    }
    s << "End of backpack: " << std::endl;

    return s;
}
