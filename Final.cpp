// Programmer: Erin Lee
// Student id: 1805820
// File: Shapes.6.cpp

// c++ libraries
#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#include "Food.h"

// function prototypes
void id();
vector<string> parseString(string);

int main()
{
  // function call for identification information
  id();

  // declare and initialize variables
  ifstream fin;     
  ofstream fout; 
  string line;
  vector<string> bag;   
  vector<const World*> myBag;

  // open files
  fin.open("food.input.txt");
  fout.open("food.output.txt");

  // Check if input file is opened successfully
  if (!fin.good())
  {
    cout << "Input file failed to open." << endl;
    return 1;
  }
 
  // Check if output file is opened successfully
  if (!fout.good())
  {
    cout << "Output file failed to open." << endl;
    return 1;
  }

  // keep looping until end of file is reached
  while (!fin.eof())
  {
    // read each line from input file and call function to get tokens
    getline(fin, line);
    bag = parseString(line);

    // will skip any empty lines from input file
    if (bag.size() != 0)
    {
      // check if token is square
      if (bag[0] == "JAPAN")
      {
        // dynamically allocate memory for a new square object using constructor 
        // store const read-only pointer object in bag
        // store 1 into different bag to represent square shape
        const Japan* const j = new Japan(bag);
        myBag.push_back(j);
      }

      // check if token is rectangle
      else if (bag[0] == "ITALY")
      {
        // dynamically allocate memory for a new rectangle object using constructor 
        // store const read-only pointer object in bag
        // store 2 into different bag to represent rectangle shape
        const Italy* const i = new Italy(bag);
        myBag.push_back(i);
      }

      // check if token is circle
      else if (bag[0] == "US")
      {
        // dynamically allocate memory for a new circle object using constructor 
        // store const read-only pointer object in bag
        // store 3 into different bag to represent circle shape
        const US* const u = new US(bag);
        myBag.push_back(u);
      }

      // check if token is triangle
      else if (bag[0] == "INDIA")
      {
        // dynamically allocate memory for a new triangle object using constructor 
        // store const read-only pointer object in bag
        // store 4 into different bag to represent triangle shape
        const India* const n = new India(bag);
        myBag.push_back(n);
      }

      // check if token is cube
      else if (bag[0] == "KOREA")
      {
        // dynamically allocate memory for a new cube object using constructor 
        // store const read-only pointer object in bag
        // store 5 into different bag to represent cube shape
        const Korea* const k = new Korea(bag);
        myBag.push_back(k);
      }

      // check if token is EOF      
      else if (bag[0] == "EOF")
        break;

      // token does not match one of eight objects
      else
        cout << bag[0] << " invalid object" << endl;
    }
  }

  // close input file
  fin.close();

  // keeps looping until all elements in bag have been output to console
  for (unsigned int i = 0; i < myBag.size(); i++)
  {
    cout << *myBag[i];
  }

  // keeps looping until all elements in bag have been output to file
  for (unsigned int i = 0; i < myBag.size(); i++)
  {
    fout << *myBag[i];
  }

  // keeps looping until all elements in bag have been deleted from memory
  for (unsigned int i = 0; i < myBag.size(); i++)
  {
    delete myBag[i]; 
  }

  // close output file
  fout.close();
}

// function will display identification information
void id()
{
  cout << "Programmer: Erin Lee" << endl;
  cout << "Programmer's ID: 1805820" << endl;
  cout << "File: " << __FILE__ << endl;
}

// function will take a string and create an array of tokens
vector<string> parseString(string str)
{
  stringstream s(str);
  istream_iterator<string> begin(s), end;
  return vector<string>(begin, end);
}

