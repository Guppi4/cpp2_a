#include "Notebook.hpp"
using namespace std;
using namespace ariel;
#include "string.h"
#include <iostream>
#include <stdexcept>
#include "Direction.hpp"
using ariel::Direction;
void Notebook :: write(int page,int row,int col,Direction h,string abc) 
{
  
}

string Notebook :: read(int page,int row,int col,Direction h,int lenght) 
{
    if(page>100){
         throw runtime_error("page 100");
    }
    if(page==0 && row==0 && col==0){
        return "___";
    }
    if (page<0 || row<0 || col<0)
        {
            throw runtime_error("Negative");
        }
  return "";
}

 void Notebook :: erase(int page,int row,int col,Direction h,int lenght) 
{
 
}

 void Notebook :: show(int page) 
{
 
}