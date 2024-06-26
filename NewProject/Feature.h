#pragma once

#include <iostream>

class Feature
{
public:
	//Feature();

	//Feature(int _NumberOfFeatures = 0);

	Feature(int _NumberOfFeatures = 0, std::string _NameOfFeature = "Default");

	int GetNumberOfFeatures() const;

	void SetNumberOfFeatures(int _NumberOfFeatures);

	std::string GetNameOfFeature() const;

	void SetNameOfFeature();

	void SetAdditionOfFeature();

	~Feature() {};

protected:

	int AdditionOfFeature = 0;

private:
	int NumberOfFeatures = 0;
	std::string NameOfFeature;

	bool NumberOfFeaturesMoreThenZero(int _NumberOfFeature);
};