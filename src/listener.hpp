#ifndef LISTENER_H
#define LISTENER_H
#include<SDL.h>
#include<assert.h>

class Listener{
private:
  bool quit;
  SDL_Event e;
public:
  Listener();
  inline void run();
};

inline void Listener::run(){
  while(!quit){
    assert(SDL_WaitEvent(&e) != 0);
    if(e.type == SDL_QUIT){
      quit = true;
    }
  }
}
  
#endif

  
