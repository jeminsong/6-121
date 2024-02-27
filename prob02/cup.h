// Jemin Song
// CPSC 121L-02
// 2/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <string>

class Cup {
 public:
  Cup();
  Cup(const std::string& drink_type, double fluid_oz);
  void Drink(double amount);
  void Refill(double amount);
  void NewDrink(const std::string& new_drink_type, double amount);
  void Empty();
  double GetFluidOz() const;
  std::string GetDrinkType() const;

 private:
  std::string drink_type_;
  double fluid_oz_;
};
