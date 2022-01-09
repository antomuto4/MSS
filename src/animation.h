#include "include.h"

namespace animation{
	unsigned int microsecond = 100000; //1000000
	void Speed(double num){
	usleep(num * microsecond);
	}

    int c_Animation;
    void Frames(int frames){
        c_Animation++;
        if(c_Animation == frames){
	        c_Animation = 0;
        }
    }

}
