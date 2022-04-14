// main check if one argument only
#include <iostream>

struct Data
{
    int a;
    int b;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data * in;
    in = new Data;
    in->a = 1;
    in->b = 2;
    // uintptr_t p =  reinterpret_cast<uintptr_t>(in);
    // Data *out;
    // out = reinterpret_cast<Data *>(p);
    // std::cout << out->a << " " << out->b << std::endl;

    uintptr_t p = serialize(in);
    Data *out = deserialize(p);
    std::cout << out->a << " " << out->b << std::endl;
    delete in;
	return (0);
}