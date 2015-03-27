#ifndef SCREEN_H
#define SCREEN_H
#include<SDL.h>

class Screen{
private:
  SDL_Window* window;
  SDL_Surface* surface;
  void draw_initial();
public:
  Screen(int width, int length);
  Screen();
  ~Screen();
};
#endif
