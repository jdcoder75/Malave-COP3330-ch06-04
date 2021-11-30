/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jose Malave
 */
//ex05

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

class name_value {      
  public:                   
    string myString;
    int myNum; 
};

int main() {
  vector<name_value> myValues;
  name_value input;
  int flag;

  do{
    cin >> input.myString >> input.myNum;

    for(int i = 0; i < myValues.size(); i++)
    {
      if(input.myString == myValues[i].myString || input.myNum == myValues[i].myNum) { flag = 1;}
    }

    if (flag == 1) {
     cout << "Already in place";
     continue; 
    }

    if(input.myString == "NoName" && input.myNum == 0 )
    {
      break;
    }

    myValues.push_back(input);
  }while(input.myString != "NoName" && input.myNum != 0 );

  for(int i = 0; i < myValues.size(); i++){
    cout << "(" << myValues[i].myString << "," << myValues[i].myNum << ")" << "\n";
  }
  return 0;
}
