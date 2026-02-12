#include <iostream>
#include <string>
#include <cassert>

class Person {
private:
    std::string name;
    int age;
    int height;
    int weight;

public:
    // Constructor (replaces Person_create)
    Person(const std::string& name, int age, int height, int weight)
        : name(name), age(age), height(height), weight(weight)
    {
        // Could add validation here if desired
        // assert(age >= 0 && height > 0 && weight > 0);
    }

    // Destructor (replaces Person_destroy) — called automatically!
    ~Person() = default;  // nothing special needed — string cleans itself

    void print() const {
        std::cout << "Name:   " << name << "\n"
                  << "\tAge:    " << age << "\n"
                  << "\tHeight: " << height << " cm\n"
                  << "\tWeight: " << weight << " lbs\n"
                  << std::endl;
    }

    // Optional: simple setters if you want to modify after creation
    void ageBy(int years) {
        age += years;
    }

    void changeHeight(int delta) {
        height += delta;
    }

    void changeWeight(int delta) {
        weight += delta;
    }
};

int main() {
    // Create objects (no manual malloc/free needed)
    Person joe("Joe Alex", 32, 164, 140);
    Person frank("Frank Blank", 20, 172, 180);

    // Print them with memory address (for illustration — not usually needed)
    std::cout << "Joe is at memory location " << &joe << ":\n";
    joe.print();

    std::cout << "Frank is at memory location " << &frank << ":\n";
    frank.print();

    std::cout << "\n--- After 20 years ---\n\n";

    // Modify (no pointer dereferencing needed)
    joe.ageBy(20);
    joe.changeHeight(-2);
    joe.changeWeight(40);

    frank.ageBy(20);
    frank.changeWeight(20);

    joe.print();
    frank.print();

    // No destroy calls needed — destructors run automatically when objects go out of scope

    return 0;
}