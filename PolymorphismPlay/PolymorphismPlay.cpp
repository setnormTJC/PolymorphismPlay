// PolymorphismPlay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Animal.h"
#include <vector>

void firstDemoOfPolymorphism()
{
	Zoo::AnimalInterface animal;
	animal.makeSound();

	Zoo::Loon loon;
	loon.makeSound();
	std::cout << "Any key to continue\n";
	std::cin.get();

	Zoo::Cat cat;
	cat.makeSound();
	std::cout << "Any key to continue\n";
	std::cin.get();


	Zoo::Fox fox;
	fox.makeSound();

}

void secondDemoOfPolymorphism()
{
	std::vector<Zoo::AnimalInterface*> zooAnimals(4); //the 4 means reserve space for 4 animals
	//Note the POINTER (asterisk) use above!


	//create the animals to put in the list: 
	Zoo::AnimalInterface animal;
	Zoo::Loon loon;
	Zoo::Cat cat;
	Zoo::Fox fox;

	zooAnimals = { &animal, &loon, &cat, &fox }; //note the address of operator! 

	//now loop and call the "appropriate"? makeSound function: 
	for (auto& currentAnimal : zooAnimals)
	{
		//currentAnimal.//no members appearing if using for (const auto& ...) -> need const on `makeSound`!
		//currentAnimal.makeSound(); //dot operator not allowed on pointer to an object 

		currentAnimal->makeSound(); 

		std::cout << "Moving on to next animal sound ... as soon as you press Enter\n";
		std::cin.get(); 
	}

}

int main()
{
	//std::vector<Zoo::AnimalInterface> zooAnimals; //a nice way to do it!
	
	//firstDemoOfPolymorphism(); 

	secondDemoOfPolymorphism();

}

