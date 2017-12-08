#include <iostream>
using namespace std;
float multiply(float,float);
float multiply_in_js(float,float); 
int main()

{

   float x=4,y=6;
   cout << "initialized\n";
   cout << "multiplying in js : "<<x<<" * "<<y<<":\n" <<multiply(x,y);

}
float multiply(float x, float y)

{

    return multiply_in_js(x, y);

}

float multiply_in_js(float x,float y){
	
	return x*y;
	
}
