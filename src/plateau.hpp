#ifndef PLATEAU_H
#define PLATEAU_H

#include<vector>

using namespace std;

typedef enum {
  Black,
  White,
  Blank,
} box;



class Plateau{
private:
  int dimension;
  vector<vector<box> > table;
  void update();
public:
  Plateau(int dimension);
  Plateau();
  inline bool playBlack(int x, int y);
  inline bool playWhite(int x, int y);
};

inline void Plateau::update(){

}

inline bool Plateau::playBlack(int x, int y){
  if (this->table[x][y] == Blank){
    this-> table[x][y] = Black;
    this->update();
  }
  else{
    return false;
  } 
  return true;
}

inline bool Plateau::playWhite(int x, int y){
  if (this->table[x][y] == Blank){
    this-> table[x][y] = White;
    this->update();
  }
  else{
    return false;
  }
  return true;
}
#endif
