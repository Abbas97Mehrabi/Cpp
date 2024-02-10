#include <iostream>



int main(){
     // Braced initializers
     /*
     int elephent_count;

     int lion_count {}; // Initializes to zero

     int dog_count {10};

     int cat_count {15};

     // Can use expression as initializer
     int domesticated_animals { dog_count + cat_count };

     std::cout << "Elephent count : " << elephent_count << std::endl;
     std::cout << "Lion count : " << lion_count << std::endl;
     std::cout << "Dog count : " << dog_count << std::endl;
     std::cout << "Cat count : " << cat_count << std::endl;
     std::cout << "Domesticated animals count : " << domesticated_animals << std::endl; 
     */
    // Functional initialization

     /*
    int apple_count (5);
    int orange_count (10);
    int fruit_count (apple_count + orange_count);

    // Information lost. less safe than braced initializers
    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count : " << apple_count << std::endl;
    std::cout << "Orang count : " << orange_count << std::endl;
    std::cout << "Fruit count : " << fruit_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;
     */
    //Assignment notation

    int bike_count = 2;
    int truck_count = 7;
    int vehicke_count = bike_count + truck_count ;
    int narrowing_conversion_functional = 2.9;

    std::cout << "Bike count : " << bike_count << std::endl;
    std::cout << "Truck count : " << truck_count << std::endl;
    std::cout << "Vehicke count : " << vehicke_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;


     // Check the size with size of
     std::cout << "Size of int : " << sizeof(int) << std::endl;
     std::cout << "Size of truck_count : " << sizeof(truck_count) << std::endl;

     return 0;
     
}