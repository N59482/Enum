#include <iostream>
#include <cstdlib>

using namespace std;

enum MOOD
	{
		ANGRY,
		CALM,
		FUN
	};

class Girl
    {
    	MOOD mood;
    	public:
    	Girl();
    	MOOD getmood()
    		{
    			return mood;
    		};
    
    	void setmood(const MOOD &mood)
    		{
    			this->mood = mood;
    		};
    };

Girl::Girl()
	{
		mood = CALM;
	};

int main()
    {
    	srand(time(0));
    	Girl nika;
    	
    	nika.setmood(MOOD(rand()%3));
    
    	switch(nika.getmood())
    		{
    			case ANGRY: 
    			{
    				cout<<"Ника очень зла!\n";
    				break;
    			};
    			case CALM: 
    			{
    				cout<<"Ника спокойна\n";
    				break;
    			};
    			case FUN: 
    			{
    				cout<<"Нике весело!\n";
    				break;
    			};
    			default: cout<<"switch default\n";
    		};
    	
    	return 0;
    };



