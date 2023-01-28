#include <iostream>

// Define text_x_times() below:
void text_x_times(std::string text, int x){

while (x > 0) {
  std::cout << text << "\n";
  x--;
}
}

int main() {
  
  std::string my_text = "Add your text here!";
  int some_number = 15; // Change this if you like!
  // Call text_x_times() below with my_text and some_number
  text_x_times(my_text, some_number);
  
}
