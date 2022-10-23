// HelloC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
typedef struct TeamFootball {
    char name[13];
    int goals;
    int losts;
    int score;
} Team;

int main() {
    Team phap, duc, brazil;
    TeamFootball goals;

   
    std::cout << " Nhap ten cho doi Phap : "; std::cin >> phap.name;
    std::cout << " Nhap ten cho doi Duc "; std::cin >> duc.name;
    std::cout << " Nhap ten cho doi Brazil "; std::cin >> brazil.name;
    std::cout << " Nhap ten cho doi Brazil "; std::cin >> TeamFootball.goals;

    cout << "Nhap vao so hang: ";
    std::cin >> Team ;
    cout << "Nhap vao so cot: ";
    cin >> C;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
