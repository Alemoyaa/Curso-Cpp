#include <iostream>
using namespace std; 
#include<algorithm> 
#include <string> 
int main() 
{ 
	string txt = "Alejandro"; 
	reverse(txt.begin(), txt.end()); 
	cout << txt << endl;
}
