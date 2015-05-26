#include "/usr/include/termios.h"

#ifndef tcgetattr
#define tcgetattr(a,b) DEBUG()
#endif

#ifndef tcsetattr
#define tcsetattr(a,b,c) DEBUG()
#endif
