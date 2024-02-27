// Jemin Song
// CPSC 121L-02
// 2/27/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
#include "cup.h"

#include <iostream>

Cup::Cup() : drink_type_("Water"), fluid_oz_(16.0) {}

Cup::Cup(const std::string& drink_type, double fluid_oz)
    : drink_type_(drink_type), fluid_oz_(fluid_oz) {}
void Cup::Drink(double amount) {
  fluid_oz_ -= amount;
  if (fluid_oz_ < 0) {
    fluid_oz_ = 0;
  }
}
void Cup::Refill(double amount) { fluid_oz_ += amount; }
void Cup::NewDrink(const std::string& new_drink_type, double amount) {
  drink_type_ = new_drink_type;
  fluid_oz_ = amount;
}
void Cup::Empty() {
  drink_type_ = "nothing";
  fluid_oz_ = 0;
}
double Cup::GetFluidOz() const { return fluid_oz_; }
std::string Cup::GetDrinkType() const { return drink_type_; }