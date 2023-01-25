#include <iostream>
#include <vector>

int main(){

//populate the vector
std::vector<int> numbers;

numbers.push_back(2);
numbers.push_back(4);
numbers.push_back(3);
numbers.push_back(6);
numbers.push_back(1);
numbers.push_back(9);

//define variables to store answer
int sum_even =0;
int prod_odd =0;

//calculate sum_even
for(int i=0; i < numbers.size(); i++){
int placeholder = numbers[i];
if (placeholder%2==0){sum_even = sum_even + placeholder;
}}

//calculate prod_odd
for(int j=0; j < numbers.size(); j++){
int placeholder = numbers[j];
if (placeholder%2!=0){prod_odd = prod_odd + placeholder;
}}

//print output
std::cout << "Sum of even numbers is " << sum_even << "\n";
std::cout << "Product of odd numbers is " << prod_odd << "\n";

}
