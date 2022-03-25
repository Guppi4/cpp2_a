/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Kirill Perevalov>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "Notebook.hpp"
#include "doctest.h"
#include <string>
#include <algorithm>
#include <stdexcept>
using namespace std;
using namespace ariel;
using ariel::Direction;


/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */

TEST_CASE("Good input")
{
    ariel::Notebook notebook;
    //1
    CHECK(notebook.read(0,0,0, Direction::Horizontal, 5)=="___");
    //2
    CHECK(notebook.read(6,0,0, Direction::Horizontal, 5)=="");
    //3
    CHECK(notebook.read(6,0,0, Direction::Horizontal, 22)=="");
    //4
    CHECK(notebook.read(99,0,0, Direction::Horizontal, 21)=="");
    //5
    CHECK(notebook.read(23,0,0, Direction::Horizontal, 2)=="");
    //6
    CHECK(notebook.read(42,42,42, Direction::Horizontal, 8)=="");
    //7
    CHECK(notebook.read(42,42,42, Direction::Horizontal, 11)=="");
    //8
    CHECK(notebook.read(46,42,42, Direction::Horizontal, 11)=="");
    //9
    CHECK(notebook.read(46,42,42, Direction::Horizontal, 11)=="");
    //10
    CHECK(notebook.read(46,42,42, Direction::Horizontal, 11)=="");


    
                                                
                                                 
                                                           
 

}
TEST_CASE("Bad input")
{
    ariel::Notebook notebook1;
    //1
    CHECK_THROWS(notebook1.read(-7,0,0, Direction::Horizontal, 5));
    //2
    CHECK_THROWS(notebook1.read(111,0,0, Direction::Horizontal, 5));
    //3
    CHECK_THROWS(notebook1.read(111,0,0, Direction::Horizontal, 5));
    //4
    CHECK_THROWS(notebook1.read(111,0,0, Direction::Horizontal, 5));
    //5
    CHECK_THROWS(notebook1.read(111,0,0, Direction::Horizontal, 5));
    //6
    CHECK_THROWS(notebook1.read(113,0,0, Direction::Horizontal, 5));
    //7
    CHECK_THROWS(notebook1.read(114,0,0, Direction::Horizontal, 5));
    //8
    CHECK_THROWS(notebook1.read(114,0,0, Direction::Horizontal, 5));
    //9
    CHECK_THROWS(notebook1.read(115,0,0, Direction::Horizontal, 5));
    //10
    CHECK_THROWS(notebook1.read(117,0,0, Direction::Horizontal, 5));
    
 
}