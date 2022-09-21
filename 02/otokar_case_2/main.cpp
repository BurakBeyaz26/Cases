#include <cstdio>
#include <iostream>
//Add header files here.
#include "queue.h"
using namespace std;

//Modify this file only to add necessary header files.
//Do not modify main function.
int main(){
    Queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    std::cout << queue.pop() << std::endl;
    std::cout << queue.pop() << std::endl;
    std::cout << queue.pop() << std::endl;
    std::cout << queue.pop() << std::endl;
    return 0;
}
