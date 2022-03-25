#include "string.h"
#include <iostream>
#include "Direction.hpp"
using namespace std;
using ariel::Direction;
namespace ariel
{
    class Notebook
    {
    public:
       
        void write(int page,int row,int col,Direction h,string abc);
        string read(int page,int row,int col,Direction h,int lenght);
        void erase(int page,int row,int col,Direction h,int lenght);
        void show(int page);
        
    };//fgut
}