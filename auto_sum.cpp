#include<iostream>
#include<string>


using namespace std;





auto add(auto  a, auto  b){
    
  auto  c = a + b;
  
  return c;
    
}


int main(){

    auto d =  add(45.11111, 1111.12);

    cout<<"The sum is "<<d<<endl;



}




