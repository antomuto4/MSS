#include "include.h"

namespace animation{
	unsigned int microsecond = 100000; //1000000
	void Speed(double num){
	usleep(num * microsecond);
	}

    int counterAnimation;
    void Frames(int frames){
        counterAnimation++;
        if(counterAnimation == frames){
	        counterAnimation = 0;
        }
    }

}
