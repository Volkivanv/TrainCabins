#include <iostream>

#define FLOOD_TRAIN(train) for(int i = 0; i < 20; i++){ \
std::cin >> train[i];                                     \
}
#define CHECK_OVERFLOW(train) for(int i = 0; i <20; i++){ \
if((train[i]) > 20) std::cout << i <<" carriage is crowded. Number of passengers " << train[i] << std::endl; \
}
#define CHECK_EMPTY(train) for(int i = 0; i <20; i++){ \
if((train[i]) <= 0) std::cout <<"Carriage " << i <<" is empty!" <<std::endl; \
}
#define SUM_PASSENGERS(train) int sum = 0; \
for(int i = 0; i < 20; i++){ \
    sum+=train[i];\
}\
std::cout<<"Total number of passengers is "<< sum << std::endl;

int main() {
    int train[20];
    std::cout << "Please input count passengers in  carriages!" << std::endl;
    FLOOD_TRAIN(train);
    CHECK_OVERFLOW(train);
    CHECK_EMPTY(train);
    SUM_PASSENGERS(train);
    return 0;
}
