// Programmer: Erin Lee
// Student id: 1805820
// File: Food.cpp

// c++ libraries
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// c libraries
#include <cmath>    

#include "Food.h"

// function will round numbers to two decimal digits
ostream& roundingZero(ostream& out)
{
  out.setf(ios::fixed);
  out.precision(0);
  return out;
}

// function will round numbers to two decimal digits
ostream& roundingTwo(ostream& out)
{
  out.setf(ios::fixed);
  out.precision(2);
  return out;
}

// function will turn off rounding back to default
ostream& roundingOff(ostream& out)
{
  out.unsetf(ios::fixed);
  out.precision(6);
  return out;
}

// overloading operator displays Shape objects
ostream& operator<<(ostream& out, const World& w)
{
  w.output(out);
  return out;
}

// Square class implementation
// initializes length of square
Japan::Japan(const vector<string>& bag) : j1(bag.size() > 1 ? atof(bag[1].c_str()) : 0),
                                          j2(bag.size() > 2 ? atof(bag[2].c_str()) : 0),
                                          j3(bag.size() > 3 ? atof(bag[3].c_str()) : 0),
                                          j4(bag.size() > 4 ? atof(bag[4].c_str()) : 0) {}


// Rectangle class implementation
// initializes length and width of rectangle
Italy::Italy(const vector<string>& bag) : i1(bag.size() > 1 ? atof(bag[1].c_str()) : 0),
                                          i2(bag.size() > 2 ? atof(bag[2].c_str()) : 0),
                                          i3(bag.size() > 3 ? atof(bag[3].c_str()) : 0),
                                          i4(bag.size() > 4 ? atof(bag[4].c_str()) : 0) {}



// Circle class implementation
// initializes radius of circle
US::US(const vector<string>& bag) : u1(bag.size() > 1 ? atof(bag[1].c_str()) : 0),
                                    u2(bag.size() > 2 ? atof(bag[2].c_str()) : 0),
                                    u3(bag.size() > 3 ? atof(bag[3].c_str()) : 0),
                                    u4(bag.size() > 4 ? atof(bag[4].c_str()) : 0) {}


// Circle class implementation
// initializes radius of circle
India::India(const vector<string>& bag) : in1(bag.size() > 1 ? atof(bag[1].c_str()) : 0),
                                          in2(bag.size() > 2 ? atof(bag[2].c_str()) : 0),
                                          in3(bag.size() > 3 ? atof(bag[3].c_str()) : 0),
                                          in4(bag.size() > 4 ? atof(bag[4].c_str()) : 0) {}



// Circle class implementation
// initializes radius of circle
Korea::Korea(const vector<string>& bag) : k1(bag.size() > 1 ? atof(bag[1].c_str()) : 0),
                                          k2(bag.size() > 2 ? atof(bag[2].c_str()) : 0),
                                          k3(bag.size() > 3 ? atof(bag[3].c_str()) : 0),
                                          k4(bag.size() > 4 ? atof(bag[4].c_str()) : 0) {}


// member function will perform calculations for square and display results 
void Japan::output(ostream& out) const
{
  // calculate area and perimeter
  double ramen = j1 * 600;
  double sushi = j2 * 1200;
  double udon = j3 * 480;
  double gyoza = j4 * 350;

  double quantity = j1 + j2 + j3 + j4;
  double total = ramen + sushi + udon + gyoza;
  double tax = total * 0.08;

  // display results to console or file
  out << "Quantity purchased: " << quantity << endl;
  out << roundingZero << " Cost: ramen: ¥" << ramen << " sushi: ¥" << sushi << " udon: ¥" << udon << " gyoza: ¥" << gyoza << endl;
  out << "Total with tax (8%): ¥" << tax + total << roundingOff << endl;
}


// member function will perform calculations for rectangle and display results 
void Italy::output(ostream& out) const
{ 
  // calculate area and perimeter
  double calamari = i1 * 4.0;
  double pasta = i2 * 7.0;
  double risotto = i3 * 8.5;
  double pizza = i3 * 9.0;

  double quantity = i1 + i2 + i3 + i4;
  double total = calamari + pasta + risotto + pizza;
  double tax = total * 0.22;

  // display results to console or file
  out << "Quantity purchased: " << quantity << endl;
  out << roundingTwo << " Cost: calamari: €" << calamari << " pasta: €" << pasta << " risotto: €" << risotto << " pizza: €" << pizza << endl;
  out << "Total with tax (22%): €" << tax + total << roundingOff << endl;
}


// member function will perform calculations for circle and display results 
void US::output(ostream& out) const
{ 
  // calculate area and perimeter
  double burger = u1 * 7.60;
  double fries = u2 * 3.50;
  double sandwich = u3 * 9.50;
  double salad = u3 * 10.0;

  double quantity = u1 + u2 + u3 + u4;
  double total = burger + fries + sandwich + salad;
  double tax = total * 0.08;
  double tip = total * 0.18;

  // display results to console or file
  out << "Quantity purchased: " << quantity << endl;
  out << roundingTwo << " Cost: burger: $" << burger << " fries: $" << fries << " sandwich: $" << sandwich << " salad: $" << salad << endl;
  out << "Total with tax (8%) and tip (18%): $" << tax + tip + total << roundingOff << endl;
}


// Triangle class implementation
// initializes length of triangle
void India::output(ostream& out) const
{ 
  // calculate area and perimeter
  double roti = in1 * 20;
  double tandoori = in2 * 120;
  double korma = in3 * 90;
  double naan = in4 * 30;

  double quantity = in1 + in2 + in3 + in4;
  double total = roti + tandoori + korma + naan;
  double tax = total * 0.12;
  double tip = total * 0.10;

  // display results to console or file
  out << "Quantity purchased: " << quantity << endl;
  out << roundingZero << " Cost: roti: ₹" << roti << " tandoori: ₹" << tandoori << " korma: ₹" << korma << " naan: ₹" << naan << endl;
  out << "Total with tax (12%) and tip (10%): ₹" << tax + tip + total << roundingOff << endl;
}

// Triangle class implementation
// initializes length of triangle
void Korea::output(ostream& out) const
{ 
  // calculate area and perimeter
  double hotteok = k1 * 1500;
  double gimbap = k2 * 3000;
  double tteokbokki = k3 * 4000;
  double odeng = k4 * 1000;

  double quantity = k1 + k2 + k3 + k4;
  double total = hotteok + gimbap + tteokbokki + odeng;
  double tax = total * 0.1;

  // display results to console or file
  out << "Quantity purchased: " << quantity << endl;
  out << roundingZero << " Cost: hotteok: ₩" << hotteok << " gimbap: ₩" << gimbap << " tteokbokki: ₩" << tteokbokki << " odeng: ₩" << odeng << endl;
  out << "Total with tax (10%): ₩" << tax + total << roundingOff << endl;
}

// assignment operator for square class
Japan& Japan::operator=(const Japan& copyThis)
{
  // declare reference variable to host object
  Japan& host = *this;
  
  // check if host is not same as parameter
  // if not, remove const factor from host dimensions and assign to parameter dimensions
  if (this!= &copyThis)
    const_cast<double&>(host.j1) = copyThis.j1;
    const_cast<double&>(host.j2) = copyThis.j2;
    const_cast<double&>(host.j3) = copyThis.j3;
    const_cast<double&>(host.j4) = copyThis.j4;

  // return reference variable
  return host;
}

// assignment operator for rectangle class
Italy& Italy::operator=(const Italy& copyThis)
{
  // declare reference variable to host object
  Italy& host = *this;

  // check if host is not same as parameter
  // if not, remove const factor from host dimensions and assign to parameter dimensions
  if (this != &copyThis)
  {
    const_cast<double&>(host.i1) = copyThis.i1;
    const_cast<double&>(host.i2) = copyThis.i2;
    const_cast<double&>(host.i3) = copyThis.i3;
    const_cast<double&>(host.i3) = copyThis.i3;
  }
  
  // return reference variable
  return host;
}


// assignment operator for circle class
US& US::operator = (const US& copyThis) 
{
  // declare reference variable to host object
  US& host = *this;

  // check if host is not same as parameter
  // if not, remove const factor from host dimensions and assign to parameter dimensions
  if (this != &copyThis) 
    const_cast<double&>(host.u1) = copyThis.u1;
    const_cast<double&>(host.u2) = copyThis.u2;
    const_cast<double&>(host.u3) = copyThis.u3;
    const_cast<double&>(host.u4) = copyThis.u4;
  
  // return reference variable
  return host;
}

// assignment operator for circle class
India& India::operator = (const India& copyThis) 
{
  // declare reference variable to host object
  India& host = *this;

  // check if host is not same as parameter
  // if not, remove const factor from host dimensions and assign to parameter dimensions
  if (this != &copyThis) 
    const_cast<double&>(host.in1) = copyThis.in1;
    const_cast<double&>(host.in2) = copyThis.in2;
    const_cast<double&>(host.in3) = copyThis.in3;
    const_cast<double&>(host.in4) = copyThis.in4;
  
  // return reference variable
  return host;
}

// assignment operator for circle class
Korea& Korea::operator = (const Korea& copyThis) 
{
  // declare reference variable to host object
  Korea& host = *this;

  // check if host is not same as parameter
  // if not, remove const factor from host dimensions and assign to parameter dimensions
  if (this != &copyThis) 
    const_cast<double&>(host.k1) = copyThis.k1;
    const_cast<double&>(host.k2) = copyThis.k2;
    const_cast<double&>(host.k3) = copyThis.k3;
    const_cast<double&>(host.k4) = copyThis.k4;
  
  // return reference variable
  return host;
}