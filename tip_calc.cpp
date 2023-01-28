#include <iostream>

double get_tip(double price, double tip, bool total_included){
if(total_included){
  return price * tip + price;}
else{return price * tip;}
}

int main(){
 get_tip(45.50, 0.20, true);  
}
