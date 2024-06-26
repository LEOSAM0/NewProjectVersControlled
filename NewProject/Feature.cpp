#include "Feature.h"
#include <iostream>

Feature::Feature()
{

}

int Feature::GetNumberOfFeatures() const
{
	return NumberOfFeatures;
}

void Feature::SetNumberOfFeatures(int _NumberOfFeatures)
{
	if (_NumberOfFeatures > 0)
	{
		NumberOfFeatures = _NumberOfFeatures;
	}
	else
	{
		std::cout << "The Number of Features is negative. Please enter the positive number" << std::endl;
	}
}

std::string Feature::GetNameOfFeature() const
{
	return NameOfFeature;
}

void Feature::SetNameOfFeature()
{
	std::cin >> NameOfFeature;
}

void Feature::SetAdditionOfFeature()
{
	std::cout << "Enter addition of feature" << std::endl;
	std::cin >> AdditionOfFeature;
	NumberOfFeatures = AdditionOfFeature;
	std::cout << "\n";
	
	if (NumberOfFeaturesMoreThenZero(AdditionOfFeature))
	{
		std::cout << "Addition of Feature is " << AdditionOfFeature << std::endl;
	}
	else
	{
		std::cout << "Addition of Feature equals Zero. What's UP MAN!" << std::endl;
	}
}

bool Feature::NumberOfFeaturesMoreThenZero(int _NumberOfFeature)
{
	NumberOfFeatures = _NumberOfFeature;
	return NumberOfFeatures > 0 ? NumberOfFeatures : 0;
}

