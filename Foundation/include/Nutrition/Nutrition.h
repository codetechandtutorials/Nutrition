#pragma once

struct NutritionalValues {
	float calories;
	float salt;
};

void NewDay();

void Eat(const NutritionalValues& value);

float GetTotalSalt();

float GetTotalCalories();
