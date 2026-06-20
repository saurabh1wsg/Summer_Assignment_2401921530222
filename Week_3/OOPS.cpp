#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Compartment {
public:
    virtual string notice() = 0;
    virtual ~Compartment() {}
};

class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class Compartment";
    }
};

class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies Compartment";
    }
};

class General : public Compartment {
public:
    string notice() {
        return "General Compartment";
    }
};

class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage Compartment";
    }
};

int main() {
    srand(time(0));

    vector<Compartment*> c(10);

    for (int i = 0; i < 10; i++) {
        int r = rand() % 4 + 1;

        if (r == 1) c[i] = new FirstClass();
        else if (r == 2) c[i] = new Ladies();
        else if (r == 3) c[i] = new General();
        else c[i] = new Luggage();
    }

    for (int i = 0; i < 10; i++) {
        cout << c[i]->notice() << endl;
    }

    for (int i = 0; i < 10; i++) {
        delete c[i];
    }

    return 0;
}
