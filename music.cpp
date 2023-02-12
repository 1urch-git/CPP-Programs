#include <iostream>
#include "song.hpp"

//use with song.hpp and song.cpp

int main() {

Song electric_relaxation;
 electric_relaxation.add_title("Electric Relaxation");
 std::cout << electric_relaxation.get_title();
 electric_relaxation.add_artist("A Tribe Called Quest");
 std::cout << electric_relaxation.get_artist();
}
