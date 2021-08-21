#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum MOOD
{
	ANGRY,
	CALM,
	FUN
};

class Nika
{
	public:

MOOD getmood()
{
	return mood;
};

void setmood(MOOD mood)
{
	this->mood=mood;
};

	private:
	MOOD mood;
};

int main()////////////////////////???????????????????????cv
{
	Nika nika;
	nika.setmood(MOOD::CALM);
	if ((nika.getmood())==MOOD::CALM) {cout<<"Ника спокойна"<<endl;}
	else {cout<<"Ника не спокойна!"<<endl;};
	
	return 0;
}



