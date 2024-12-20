#include "Cube.h"
#include <cstdlib>
#include <ctime>

Cube::Cube()
{

}

void Cube::printCube() //this function prints visual representation of a cube 
{
    //The output should look like this :it represents Rubick's cube. Numbers on the squares are for the references 
    //        _________________
    //       /2       /3      /|
    //      /        /       / |
    //     /________/_______/  |
    //    /1       /4      /|3 /
    //   /        /       / | /|
    //  /________/_______/2 |/ | 
    //  |2       |3      |  /  |
    //  |        |       | /|4 /
    //  |________|_______|/ | /
    //  |1       |4      |1 |/
    //  |        |       |  /
    //  |________|_______| /
    //
    //
    //BEGIN function printCube definition 

    //local variables 

    //variables to store addresses of characters within 3d array for convinience 

    //top side charachters 
    char topOne = cubeFourBlock[0][0][1];
    char topTwo = cubeFourBlock[1][0][1];
    char topThree = cubeFourBlock[1][0][2];
    char topFour = cubeFourBlock[0][0][2];

    //front side characters 
    char frontOne = cubeFourBlock[0][2][1];
    char frontTwo = cubeFourBlock[0][1][1];
    char frontThree = cubeFourBlock[0][1][2];
    char frontFour = cubeFourBlock[0][2][2];

    //right side characters 

    char rightOne = cubeFourBlock[0][2][3];
    char rightTwo = cubeFourBlock[0][1][3];
    char rightThree = cubeFourBlock[1][1][3];
    char rightFour = cubeFourBlock[1][2][3];
        
    std::cout<<"========================================================================"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"                                  _________________"<<std::endl;
    std::cout<<"                                 /"<<topTwo<<"       /"<<topThree<<"      /|"<<std::endl;
    std::cout<<"                                /        /       / |"<<std::endl;
    std::cout<<"                               /________/_______/  |"<<std::endl;
    std::cout<<"                              /"<<topOne<<"       /"<<topFour<<"      /|"<<rightThree<<" /"<<std::endl;
    std::cout<<"                             /        /       / | /|"<<std::endl;
    std::cout<<"                            /________/_______/"<<rightTwo<<" |/ |"<<std::endl;
    std::cout<<"                            |"<<frontTwo<<"       |"<<frontThree<<"      |  /  |"<<std::endl;
    std::cout<<"Rotate row 1 right ----|    |        |       | /|"<<rightFour<<" /"<<std::endl;
    std::cout<<"                            |________|_______|/ | /"<<std::endl;
    std::cout<<"                            |"<<frontOne<<"       |"<<frontFour<<"      |"<<rightOne<<" |/"<<std::endl;
    std::cout<<"Rotate row 2 right ----|    |        |       |  /"<<std::endl;
    std::cout<<"                            |________|_______| /"<<std::endl;
    std::cout<<"                                |        |"<<std::endl;
    std::cout<<"Rotate column 1 down -----------|        | "<<std::endl;
    std::cout<<"Rotate column 2 down --------------------|"<<std::endl;
    std::cout<<"========================================================================"<<std::endl;


}
void Cube::rotate (int i)  // function to rotate cube 
{

    //local variables 

    //variables to store addresses of characters within 3d array for convinience and as buffer so that actual array values are not affected util needed 

    //top side charachters 
    char topOne = cubeFourBlock[0][0][1];
    char topTwo = cubeFourBlock[1][0][1];
    char topThree = cubeFourBlock[1][0][2];
    char topFour = cubeFourBlock[0][0][2];

    //front side characters 
    char frontOne = cubeFourBlock[0][2][1];
    char frontTwo = cubeFourBlock[0][1][1];
    char frontThree = cubeFourBlock[0][1][2];
    char frontFour = cubeFourBlock[0][2][2];

    //right side characters 

    char rightOne = cubeFourBlock[0][2][3];
    char rightTwo = cubeFourBlock[0][1][3];
    char rightThree = cubeFourBlock[1][1][3];
    char rightFour = cubeFourBlock[1][2][3];

    //back side characters 
    char backOne = cubeFourBlock[1][2][1];
    char backTwo = cubeFourBlock[1][1][1]; 
    char backThree = cubeFourBlock[1][1][2];
    char backFour = cubeFourBlock[1][2][2];

    //bottom side characters 

    char botOne = cubeFourBlock[0][3][1];
    char botTwo = cubeFourBlock[1][3][1];
    char botThree = cubeFourBlock[1][3][2];
    char botFour = cubeFourBlock[0][3][2];

    //left side characters

    char leftOne = cubeFourBlock[0][2][0];
    char leftTwo = cubeFourBlock[0][1][0];
    char leftThree = cubeFourBlock[1][1][0];
    char leftFour = cubeFourBlock[1][2][0];

    //buffer char

    char buffer1;
    char buffer2;


    //rotate column and reassign adresses of 3d arrays with new characters 
    if (i == 1)
    {
        std::cout<<"Rotating row 1 to the right........"<<std::endl;

        //side rotation 

        cubeFourBlock[0][1][1] = leftThree;
        cubeFourBlock[0][1][2] = leftTwo;
        cubeFourBlock[0][1][3] = frontTwo;
        cubeFourBlock[1][1][3] = frontThree;
        cubeFourBlock[1][1][2] = rightTwo;
        cubeFourBlock[1][1][1] = rightThree;
        cubeFourBlock[1][1][0] = backThree;
        cubeFourBlock[0][1][0] = backTwo;
        
        //top rotation

        cubeFourBlock[0][0][2] = topOne;
        cubeFourBlock[1][0][2] = topFour;
        cubeFourBlock[1][0][1] = topThree;
        cubeFourBlock[0][0][1] = topTwo;

    }
    else if (i == 2)
    {
        std::cout<<"Rotating row 2 to the right........"<<std::endl;

        //side rotation

        cubeFourBlock[0][2][1] = leftFour;
        cubeFourBlock[0][2][2] = leftOne;
        cubeFourBlock[0][2][3] = frontOne;
        cubeFourBlock[1][2][3] = frontFour;
        cubeFourBlock[1][2][2] = rightOne;
        cubeFourBlock[1][2][1] = rightFour;
        cubeFourBlock[1][2][0] = backFour;
        cubeFourBlock[0][2][0] = backOne;
        
        //bottom rotation

        cubeFourBlock[0][3][2] = botOne;
        cubeFourBlock[1][3][2] = botFour;
        cubeFourBlock[1][3][1] = botThree;
        cubeFourBlock[0][3][1] = botTwo;
    }
    else if (i == 3)
    {
        std::cout<<"Rotating column 1 down........"<<std::endl;

        //side rotation
 

        cubeFourBlock[0][1][1] = topTwo;
        cubeFourBlock[0][2][1] = topOne;
        cubeFourBlock[0][3][1] = frontTwo;
        cubeFourBlock[1][3][1] = frontOne;
        cubeFourBlock[1][2][1] = botOne;
        cubeFourBlock[1][1][1] = botTwo;
        cubeFourBlock[1][0][1] = backOne;
        cubeFourBlock[0][0][1] = backTwo;
        
        //left rotation


        cubeFourBlock[0][1][0] = leftThree;
        cubeFourBlock[0][2][0] = leftTwo;
        cubeFourBlock[1][2][0] = leftOne;
        cubeFourBlock[1][1][0] = leftFour;

    }
    else if (i == 4)
    {
         std::cout<<"Rotating column 2 down........"<<std::endl;

        //side rotation


        cubeFourBlock[0][1][2] = topThree;
        cubeFourBlock[0][2][2] = topFour;
        cubeFourBlock[0][3][2] = frontThree;
        cubeFourBlock[1][3][2] = frontFour;
        cubeFourBlock[1][2][2] = botFour;
        cubeFourBlock[1][1][2] = botThree;
        cubeFourBlock[1][0][2] = backFour;
        cubeFourBlock[0][0][2] = backThree;
        
        //right rotation


        cubeFourBlock[0][1][3] = rightThree;
        cubeFourBlock[0][2][3] = rightTwo;
        cubeFourBlock[1][2][3] = rightOne;
        cubeFourBlock[1][1][3] = rightFour;

    }
    else if (i == 5)
    {
        std::cout<<"Rotating cube to the right...."<<std::endl;
        rotate(1);
        rotate(2);
    } 
    else if (i == 6)
    {
        std::cout<<"Rotating cube down......."<<std::endl;
        rotate(3);
        rotate(4);
    }
    else 
    {
        std::cout<<"Please select a valid option "<<std::endl;
    }
}

void Cube::shuffle() 
{
    int times; //variable to store how many times shuffling will be done 
    int operation; //variable to store operatoin number that will be performed on a cube to shuffle it (1-6 as in rotate function)

    // Seed the random number generator with the current time
    std::srand(std::time(0)); 
    times = std::rand() % 100 + 3; //time is random between 3 and 100
    for (int i = 0; i<times; i++)
    {
        operation = std::rand() % 6 + 1; //random operation betwwen 1 - 6
        rotate(operation); 
    }
}
