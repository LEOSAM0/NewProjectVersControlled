#pragma once
#include <iostream>

class Feature
{
public:
	Feature();

	~Feature();

protected:
	int AdditionOfFeature;

private:
	int NumberOfFeatures;
	std::string NameOfFeature;
};