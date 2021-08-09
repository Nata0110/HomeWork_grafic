#include <iostream>

int main()
{
    std::cout << " Version #1: used Array&Cycle" << std::endl;

    char arrayHorizUp[50];

    for (int j = 0; j < 50; ++j)
    {
        arrayHorizUp[j] = 38;
        std::cout << arrayHorizUp[j];
    }
    std::cout << "\n";
    char arrayVertLeft[12];

    for (int i = 1; i < 12; ++i)
    {
        arrayVertLeft[i] = 38;
        std::cout << arrayVertLeft[i] << "\t \t \t \t \t \t " << "&" << std::endl;
    }

    char arrayHorizDown[51];

    for (int j = 1; j < 51; ++j)
    {
        //arrayHorizDown[j] = 32;
        arrayHorizDown[j] = 38;
        std::cout << arrayHorizDown[j] ;
    }

    std::cout << " \n \n Version #2: used just \"cout\"" << std::endl;
    std::cout << "  _________________________________________________ " << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |                                                 |" << std::endl;
    std::cout << " |_________________________________________________|" << std::endl;

    std::cout << " \n Version #3: used Cycles" << std::endl;
    std::cout << " Write size of quadrate" << std::endl;
    int n;
    std::cin >> n;
    for (int i=0; (i <= n -1); i++)
    {
        for (int j=0; (j <= n - 1); j++)
            if  (i == 0 || (j == n -1) || j == 0 || (i == n - 1 ))
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << std::endl;
    }

    std::cout << " \n Version #4: used Cycles. Write width and height" << std::endl;
    std::cout << "Write width:" << std::endl;
    int w;
    std::cin >> w;
    std::cout << "Write height:" << std::endl;
    int h;
    std::cin >> h;

    for (int i=0; i <= h - 1; i++)
    {
        for (int j=0; j <= w -1; j++)
            if  (i == 0 || (j == w -1) || j == 0 || (i == h - 1))
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << std::endl;
    }
}
