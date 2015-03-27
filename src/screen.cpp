#include"screen.hpp"

Screen::Screen(int width, int height){
  if(SDL_Init(SDL_INIT_VIDEO)<0){
    printf("SDL could not initialize! SDL_Error: %s\n",SDL_GetError());
  }
  else{
    //Create window
    window = SDL_CreateWindow( "Let's Go!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN );
    if(window == NULL){
      printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    }
    else {
      //Get window surface
      surface = SDL_GetWindowSurface(window);
      //Fill the surface white
      SDL_FillRect( surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF ));
      //Update the surface
      SDL_UpdateWindowSurface( window );
    }
  }
}

Screen::Screen(){
  if(SDL_Init(SDL_INIT_VIDEO)<0){
    printf("SDL could not initialize! SDL_Error: %s\n",SDL_GetError());
  }
  else{
    //Create window
    window = SDL_CreateWindow( "Let's Go!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN );
    if(window == NULL){
      printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    }
    else {
      //Get window surface
      surface = SDL_GetWindowSurface( window );
      //Fill the surface white
      SDL_FillRect( surface, NULL, SDL_MapRGB( surface->format, 0xFF, 0xFF, 0xFF ) );
      //Update the surface
      SDL_UpdateWindowSurface( window );
    }
  }
}

Screen::~Screen(){
  //Destroy window
  SDL_DestroyWindow(window);
  //Quit SDL subsystems
  SDL_Quit();
}

void Screen::draw_initial(){
  
}
