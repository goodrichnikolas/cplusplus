//Hello World

#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <chrono>

void greet(std::string first_name, std::string last_name) {
    std::cout << "Hello " << first_name << " " << last_name << std::endl;
}

std::vector<int> generate_vector(int size = 1000000) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(1, 9);

    //Get current time
    auto start = std::chrono::high_resolution_clock::now();


    std::vector<int> data(size);

    for (int i = 0; i < size; i++) {
        data[i] = dis(gen);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Time to generate vector: " << elapsed.count() << "s\n";

    return data;
}


int main() {



    std::cout << "Hello World" << std::endl;
    return 0;
}

