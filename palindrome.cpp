#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){

//initialize iterators, and subtract one from counter due to indexing
int i=0;
int counter = text.size()-1;

//while loop to cycle thorugh letters
while(i<text.size()){
 if(text[i]==text[counter]){
  i++;
  counter--;
 }
 else{return false;} //break loop and return false once it doesn't meet criteria
 return true;
 }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}

 //output will be 1,1,0
