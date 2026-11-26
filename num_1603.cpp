#include <iostream> 
#include <cassert> 

class ParkingSystem;

class ParkingSystem {
    public: 
        ParkingSystem(int big, int medium, int small);
        bool addCar(int carType);
    private: 
        int big_;
        int medium_;
        int small_;
};

ParkingSystem::ParkingSystem(int big, int medium, int small): 
    big_{big},
    medium_{medium},
    small_{small} 
    {

    }

bool ParkingSystem::addCar(int carType) {
    assert (carType > 0 && carType < 4);
    if (carType == 1) {
        if (big_ > 0) {
            big_ --;
            return true; 
        }
        return false;
    }else if(carType == 2) {
        if (medium_ > 0) {
            medium_ --;
            return true; 
        }
        return false; 
    }else {
        if (small_ > 0) {
            small_ --; 
            return true;
        }
        return false;
    }
}


int main();

int main() {
    ParkingSystem ps{1,1,0};
    assert(ps.addCar(1) == true);
    assert(ps.addCar(1) == false);
    assert(ps.addCar(3) == false);
    assert(ps.addCar(2) == true);

    std::cout << "what i wrote was correct!" << std::endl;
    return 0;
}