#include<iostream>
#include"SDL.h"
#include"screen.hpp"
#include"listener.hpp"
using namespace std;

int main(void){SDL_Init(SDL_INIT_VIDEO);
  Screen myScreen(800,600);
  Listener myListener;
  myListener.run();
  return 0;
}
