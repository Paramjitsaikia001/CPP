// inheritence
#include <iostream>
using namespace std;
class animal
{
protected:
    string species;

public:
    animal(string sp)
    {
        species = sp;
    }
    void showspecies()
    {
        cout << "species: " << species << endl;
    }
};

class dog : public animal
{
protected:
    string bread;

public:
    dog(string sp, string br) : animal(sp)
    {
        bread = br;
    }

    void showbread()
    {
        cout << "species: " << species << endl;
        cout << "bread: " << bread << endl;
    }
};

int main()
{
    dog mydog("canine", "Golden Retriever");
    mydog.showspecies();
    mydog.showbread();
    return 0;
}