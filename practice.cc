#include <cstdio>
#include <string>

using namespace std;

class Pet {
public:
	Pet(string passName) {
		name = passName;
	}
	
	string getName() {
		return name;
	}

	void setName(string passName) {
		name = passName; 
	}
private:
    string name;
};

/* Dog is a subclass of Pet */

class Dog : public Pet {
public:
    Dog(string name, int age) 
    : Pet(name) {
        currAge = age;
    }

    int getAge() {
        return currAge;
    }

    void setAge(int set) {
        currAge = set;
    }
private:
    int currAge;
};

int main() {
	/*Pet x = Pet("Barry");
    printf("%s\n", x.getName().c_str());
	x.setName("Hello");
	printf("%s\n", x.getName().c_str()); */

    Dog d = Dog("Marta", 5);
    printf("%s\n", d.getName().c_str());
	printf("%d\n", d.getAge());
    d.setAge(10);
	printf("%d\n", d.getAge());
}
