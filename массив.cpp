#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
const int size = 15;
int array[size];


srand(time(NULL));

std::cout << "koroche massiv" << std::endl;
for(int i=0; i<size; i++) {
    array[i] = rand() % 100;
    std::cout << array[i] << " ";
}

std::cout << "\n chetnye chisla" << std::endl;
for(int i=0; i<size; i++) {
    if(array[i] % 2 == 0) {
        std::cout << array[i] << " ";
    }
}

return 0;
}