#include <iostream>
#include <string>

class TJarvis {
public:
    struct TParams {
        std::string LordName;
    };

    TJarvis(const TParams& params);

    void SayHi() const;

private:
    std::string LordName;
};

TJarvis::TJarvis(const TJarvis::TParams& params)
    : LordName(params.LordName)
{
}

void TJarvis::SayHi() const {
    std::cout << "Hi, " << LordName << "! I'm Jarvis" << std::endl;
}

int main() {
    TJarvis jarvis({"Andru"});

    jarvis.SayHi();

    return 0;
}
