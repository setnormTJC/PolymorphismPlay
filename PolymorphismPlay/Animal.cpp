#include "Animal.h"


void Zoo::AnimalInterface::makeSound()
{
	std::cout << "Generic animal sound...?\n";
}

void Zoo::Loon::makeSound()
{	
	system("start https://youtu.be/2A23jUixSJM?si=STFMLEuVp6g6cWpa");
}

void Zoo::Cat::makeSound()
{
	system("prayKitty.mp4");
}

void Zoo::Fox::makeSound()
{
	system("ha-tee-ha-tee-ha-tee-hee-ho.wav");
}


