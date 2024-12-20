#ifndef MAINMENU_H
#define MAINMENU_H

#include "Cube.h"

class MainMenu
{
    public: //public section of a class 

        MainMenu(); //class constructor

        void menu(); //function to call menu
        void greeting(); //function to call greeting 
    
    private: //private section of a class 

        Cube cube; //instance of a cube object 
};




#endif