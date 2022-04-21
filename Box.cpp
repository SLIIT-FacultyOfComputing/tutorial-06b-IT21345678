#include "Box.h"
#include <iostream>
using namespace std;

void Box:: setvalues(int len,int wid,int hei){
      length=len;
       width=wid;
       height=hei;
  
}

int Box :: getHeight(){
  return height;
}
int Box :: getLength(){
  return length;
}
int Box :: getWidth(){
  return width;
}
int Box::calcVolume() {
  return length*width*height;
}
