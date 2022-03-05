#include "animation.h"

int c_Animation;
void Frames(int frames){
  c_Animation++;
  if(c_Animation == frames){
    c_Animation = 0;
  }
}
