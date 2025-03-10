#pragma once

#include <iostream>

namespace Zoo
{
	class AnimalInterface
	{

	//protected: 
	public: 
		virtual void makeSound();  //virtual means "can be overridden" (by children classes) 
	};

	/*A type of duck*/
	class Loon : public AnimalInterface
	{
	public: 
		void makeSound() override;  //a Loon will override the sound its parent makes
	};

	class Cat : public AnimalInterface
	{
	public: 
		void makeSound() override;
	};

	class Fox : public AnimalInterface
	{
	public: 
		void makeSound() override;
	};
}