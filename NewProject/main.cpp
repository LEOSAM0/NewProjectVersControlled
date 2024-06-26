#include <iostream>
#include "Feature.h"
#include "MainFeature.h"

int main()
{
	std::cout << "Hello!\n";
	std::cout << "Welcome to The Hell\nBoy!" << std::endl;
	std::cout << "Bye-bye!" << std::endl;
	std::cout << "\n";

	Feature feature(14, "der");
	std::cout << feature.GetNameOfFeature() << std::endl;
	std::cout << feature.GetNumberOfFeatures() << std::endl;
	feature.SetNumberOfFeatures(2);
	feature.SetAdditionOfFeature();
}