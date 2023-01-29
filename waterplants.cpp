#include <iostream>

// Define needs_water() here:

std::string needs_water(int days, bool is_succulent){

  std::string water;

  if (is_succulent && days <= 12){
    water = "Don't water the plant!";
  }
  else if(is_succulent && days >= 13){
    water = "Go ahead and give the plant a little water.";
  }
  else if(is_succulent == false && days > 3){
water =  "Time to water the plant.";
  }
  else{
    water =  "Don't water the plant!";
  }
  return water;
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
