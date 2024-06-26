#pragma once

#include <iostream>

class Feature
{
public:
	Feature();

	int GetNumberOfFeatures() const;

	void SetNumberOfFeatures(int _NumberOfFeatures);

	std::string GetNameOfFeature() const;

	void SetNameOfFeature();

	void SetAdditionOfFeature();

	~Feature() {};

protected:

	int AdditionOfFeature;

private:
	int NumberOfFeatures = 0;
	std::string NameOfFeature;

	bool NumberOfFeaturesMoreThenZero(int _NumberOfFeature);
};