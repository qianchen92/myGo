#include"plateau.hpp"

Plateau::Plateau (int dimension){
  this->dimension = dimension;
  this->table = vector<vector<box> >(dimension, vector<box>(dimension,Blank));
}

Plateau::Plateau(){
  dimension = 19;
  this->dimension = dimension;
  this->table = vector<vector<box> >(dimension, vector<box>(dimension,Blank));
}
