// Programmer: Erin Lee
// Student id: 1805820
// File: pShapes.h

#ifndef FOOD_H
#define FOOD_H

// c++ libraries
#include <string>
#include <vector>
using namespace std;

// c libraries
#include <cstdlib>   // atof

// struct variable as base class
struct World
{
  // pure virtual and destructor function
  virtual void output(ostream&) const = 0;
  virtual ~World(){}
};

// overloading operator
ostream& operator<<(ostream&, const World&);

// derived class Square inherits from Shape
class Japan : public World
{
  // public constructor, assignment operator, and member function
  public:
  Japan(const vector<string>&);
  Japan& operator=(const Japan&);
  void output(ostream&) const;

  // declare protected variable
  protected:
  const double j1;
  const double j2;
  const double j3;
  const double j4;
};

// derived class Rectangle inherits from Shape
class Italy : public World
{
  // public constructor, assignment operator, and member function
  public:
  Italy(const vector<string>&);
  Italy& operator=(const Italy&);
  void output(ostream&) const;

  // declare protected variables
  protected:
  const double i1;
  const double i2;
  const double i3;
  const double i4;
};

// derived class Circle inherits from Shape
class US : public World
{
  // public constructor, assignment operator, and member function
  public:
  US(const vector<string>&);
  US& operator=(const US&);
  void output(ostream&) const;

  // declare protected variable
  protected:
  const double u1;
  const double u2;
  const double u3;
  const double u4;
};

// derived class Triangle inherits from Shape
class India : public World
{
  // public constructor, assignment operator, and member function
  public:
  India(const vector<string>&);
  India& operator=(const India&);
  void output(ostream&) const;

  // declare protected variable
  protected:
  const double in1;
  const double in2;
  const double in3;
  const double in4;
};

// derived class Triangle inherits from Shape
class Korea : public World
{
  // public constructor, assignment operator, and member function
  public:
  Korea(const vector<string>&);
  Korea& operator=(const Korea&);
  void output(ostream&) const;

  // declare protected variable
  protected:
  const double k1;
  const double k2;
  const double k3;
  const double k4;
};

#endif