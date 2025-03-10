#pragma once

#include <iostream>

namespace Zoo
{
	class AnimalInterface
	{

	//protected: 
	public: 
		void makeSound(); 
	};

	/*A type of duck*/
	class Loon : public AnimalInterface
	{
	public: 
		void makeSound(); 
	};

	class Cat : public AnimalInterface
	{
	public: 
		void makeSound(); 
	};

	class Fox : public AnimalInterface
	{
	public: 
		void makeSound();
	};
}