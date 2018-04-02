#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <locale>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <limits>
#include <string>
#include "Unit.h"
using namespace std;
int main(){
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try{
		
		Unit *army[4];
		army[0]=new AirUnit(100,5000,5000);
		army[1]=new LandUnit(150,500,20);
		army[2]=new SeaUnit(200,2000,666);
		army[3]=new SUnit(500);
		for(int i=0;i<4;i++){
			army[i]->attack();
			army[i]->defend();
			cout<<endl;
		}
		
	}
	catch(const char*mes){
		cout<<mes<<endl;
	}
	return 0;
}
