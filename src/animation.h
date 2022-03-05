#include <unistd.h>

namespace animation{
  unsigned int microsecond = 100000; //1000000
  void Speed(double num){
    usleep(num * microsecond);
  }

}
