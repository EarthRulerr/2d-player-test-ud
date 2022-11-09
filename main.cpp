#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main(){
  system("clear");
  int loop;
  int ox = 1;
  int y = 1;
  string input;
  loop = 1;
  while(loop == 1){
    if(y > 10){
      y = 9;
    }
    system("clear"); 
  if(y == 10){
    cout << "O" << endl << endl << endl << endl << endl << endl << endl << endl << endl;
  } 
   else if(y == 9){
    cout << endl << "O" << endl << endl << endl << endl << endl << endl << endl << endl;
  }
  else if(y == 8){
    cout << endl << endl << "O" << endl << endl << endl << endl << endl << endl << endl;
    }
    else if(y == 7){
    cout << endl << endl << endl << "O" << endl << endl << endl << endl << endl << endl;
  }  
    else if(y == 6){
    cout << endl << endl << endl << endl << "O" << endl << endl << endl << endl << endl;
  }  
    else if(y == 5){
    cout << endl << endl << endl << endl << endl << "O" << endl << endl << endl << endl;
  }  
    else if(y == 4){
    cout << endl << endl << endl << endl << endl << endl << "O" << endl << endl << endl;
  }  
    else if(y == 3){
    cout << endl << endl << endl << endl << endl << endl << endl << "O" << endl << endl;
  }  
    else if(y == 2){
    cout << endl << endl << endl << endl << endl << endl << endl << endl << "O" << endl;
  }  
    else if(y == 1){
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << "O";
      }
    cout << "__________________________________________________________" << endl << "Type: w and s for motion." << endl;
  cin >> input;
  if(input == "w"){
    y = y+2;
    }
    if(input == "s"){
      y = y-1;
    }
  }
}
