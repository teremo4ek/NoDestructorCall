#include <iostream>
#pragma once


struct A 
{
  A() 
  {
	  std::cout << "A::A()"; 
  }
  
  ~A() 
  { 
	  std::cout << "A::~A()"; 
  }
};

A* createA();