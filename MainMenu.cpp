#include "MainMenu.h"
#include "Cube.h"
#include <iostream>
#include <String>

MainMenu::MainMenu()
{

}

void MainMenu::menu() 
{
    int userOption = 0; //default user option 
    while (userOption != 9)
    {
        std::cout<<"=========================================="<<std::endl;
        std::cout<<"Please choose from the following options:"<<std::endl;
        std::cout<<"1.Print current cube status"<<std::endl;
        std::cout<<"2.Shuffle cube"<<std::endl;
        std::cout<<"3.Rotate row 1 right"<<std::endl;
        std::cout<<"4.Rotate row 2 right"<<std::endl;
        std::cout<<"5.Rotate column 1 down"<<std::endl;
        std::cout<<"6.Rotate column 2 down"<<std::endl;
        std::cout<<"7.Rotate whole cube right"<<std::endl;
        std::cout<<"8.Rotate whole cube down"<<std::endl;
        std::cout<<"9.Quit Game"<<std::endl;
        std::cout<<"=========================================="<<std::endl;
        std::cin>>userOption;
        if (userOption==1)
        {
            cube.printCube();
        }
        else if (userOption == 2)
        {
            std::cout<<"Shuffling your cube......."<<std::endl;
            cube.shuffle();
            std::cout<<"Done shuffling..........."<<std::endl;
        }
        else if (userOption == 3)
        {
            cube.rotate(1);
        }
        else if (userOption == 4)
        {
            cube.rotate(2);
        }
        else if (userOption == 5)
        {
            cube.rotate(3);
        }
        else if (userOption == 6)
        {
            cube.rotate(4);
        }
        else if (userOption == 7)
        {
            cube.rotate(5);
        }
        else if (userOption == 8)
        {
            cube.rotate(6);
        }
        else if (userOption == 9)
        {
            std::cout<<"Goodbye!"<<std::endl;
        }
        else 
        {
            std::cout<<"Invalid choice"<<std::endl;
        }

    }
    
}

void MainMenu::greeting()
{
    std::cout<<"================================"<<std::endl;
    std::cout<<"Welcome to a 2x2 rubic cube game"<<std::endl;
    std::cout<<"================================"<<std::endl;
}