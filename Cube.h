#ifndef CUBE_H
#define CUBE_H

#include <iostream>
#include <string>


class Cube  
{
    public: 

        Cube(); //class constructor 


        //class functions 

        void rotate(int i); //function to rotate one of the cube's columns up or rows to the left 
        void shuffle(); //function to shuffle cube 
        void printCube(); //prints out a cube

    private:   

        char cubeFourBlock[2][4][4] =       {{ {'N','R','R','N'}, 
                                               {'Y','B','B','G'},  
                                               {'Y','B','B','G'},  
                                               {'N','O','O','N'}},

                                              {{'N','R','R','N'}, 
                                               {'Y','W','W','G'},  
                                               {'Y','W','W','G'},  
                                               {'N','O','O','N'}} 

                                            }; //3d array for Rubick's cube, each char is a side representation besides N

};


#endif


