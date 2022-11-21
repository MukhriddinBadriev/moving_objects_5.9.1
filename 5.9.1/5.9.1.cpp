#include <iostream>

#include <string>
#include <vector>

template <typename T>
void move_vectors(std::vector<T> &a, std::vector<T> &b) {
    b = std::move(a);
}

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one,two);

    std::cout << two[0]<<'\n'<<two[1];
    
    return 0;
}