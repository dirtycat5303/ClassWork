# include "myheader.h"


void CheckInput()
{
  bool valid = false;
    int input;
    do{
        if(cin>>input)
        {
        	valid = true;
        }
        else
        cin.clear();
        cin.ignore(1000, '\n');//empty input stream

        "this input is not valid\n";
    }while(!valid);
}
