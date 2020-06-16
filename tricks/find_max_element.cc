#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> arr = {1, 6, 0, -10, 34};

    // Find max value in array
    auto max_element = *(std::max_element(arr.begin(), arr.end()));
    std::cout<<"Max value:" << max_element<<std::endl;
    return 0;
}
