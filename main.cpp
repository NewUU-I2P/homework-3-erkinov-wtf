#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1(55);
    cout << "Problem 2\n";
    problemSolution2(89, 45, 1982);
    cout << "Problem 3\n";
    problemSolution3(1.5, 'M');
    cout << "Problem 4\n";
    problemSolution4("18:20:3F:20:AB:11");
    cout << "Problem 5\n";
    problemSolution5(25, 5, '*');

    return 0;
}