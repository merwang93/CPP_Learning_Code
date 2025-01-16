#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::string       name;
    std::stringstream builder;
    while (true)
    {
        std::getline(std::cin, name);
        // if (name == "")
        // {
        //     break;
        // }
        builder << "Craow " << name << std::endl;
        if (name.empty())
        {
            break;
        }
    }
    std::cout << builder.str() << std::endl;
    return 0;
}
