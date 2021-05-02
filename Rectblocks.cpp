#include <iostream>
#include <stdio.h>
#include <algorithm> 
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <vector>

#define RECTANGLE_H
#define MAXARRAYSIZE 1000


using namespace std;

class Rectblocks {
  public:
  int width, length, height;


  public:
  Rectblocks();
  Rectblocks(int w = 0, int l = 0, int h = 0); 
  void setLength(int l);
	void setWidth(int w);
	void setHeight(int h);
  int getLength() const;
  int getWidth() const;
  int getHeight() const;

  void Rectangle();


  };



Rectblocks::Rectblocks(){
}

// set functions
Rectblocks::Rectblocks(int l, int w, int h){
  length = l;
  width = w;
  height = h;
}

void Rectblocks::setLength(int l){
  l = 0;
}
void Rectblocks::setWidth(int w){
  w = 0;
}
void Rectblocks::setHeight(int h){
  h = 0;
}


void Rectblocks::Rectangle()
 {
  cout << endl << "width = " << getWidth();
	cout << endl << "length = " << getLength();
	cout << endl << "height = " << getHeight();
} 
 


int main()
{

    ifstream fin("dataBlocks.dat");
    int num;
    vector<int> vec;
    string line, s;

    while (fin >> num)
    {
        vec.push_back(num);
    }

    for(int i = 0; i <= vec[vec.size()-1];i++)
    {
        cout << vec[i] << endl;
    }

    system ("pause");

}


