#include<iostream>

class log
{
private:
    /* data */
public:
    log(const char*);
    ~log();
};

log::log(const char* log)
{
    std::cout << log << std::endl;
}

log::~log()
{
}
