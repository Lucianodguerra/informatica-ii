#include <iostream>

class cControl
{
private:
    static int sGenID;
    int mID{};
public:
    cControl () : mID { sGenID++ }
    {}
    int getID ()
    {
        return this->mID;
    }
};

int cControl::sGenID {1};

int main()
{
    cControl a{};
    cControl b{};
    cControl c{};
    cControl d{};
    std::cout << a.getID() << "\n"
              << b.getID() << "\n"
              << c.getID() << "\n"
              << d.getID() << "\n";
    return 0;
}
