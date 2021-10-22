#include "include.h"

namespace animation{
	unsigned int microsecond = 100000; //1000000
	void speed(double num){
	usleep(num * microsecond);
	}

    int counterAnimation;
    void frames(int frames){
        counterAnimation++;
        if(counterAnimation == frames){
	        counterAnimation = 0;
        }
    }

}