// Nutrition.cpp : Defines the entry point for the application.
//

#include "Nutrition.h"
#include <numeric>
#include <vector>

NutritionalValues operator+(const NutritionalValues& lhs, const NutritionalValues& rhs) {
  NutritionalValues temp{};
  temp.calories = lhs.calories + rhs.calories;
  temp.calories = lhs.salt + rhs.salt;
  return temp;
}

struct NutritianalTotals {
  std::vector<NutritionalValues> values;
};

static NutritianalTotals CurrentRunValues;

float GetTotalCalories() {
  float total_cals{};
  for (auto& val : CurrentRunValues.values) {
    total_cals += val.calories;
  }
  return total_cals;
}

float GetTotalSalt() {
  float total_salt{};
  for (auto& val : CurrentRunValues.values) {
    total_salt += val.salt;
  }
  return total_salt;
}

void NewDay() {
  CurrentRunValues.values.clear();
}

void Eat(const NutritionalValues& value) {
  CurrentRunValues.values.push_back(value);
}
