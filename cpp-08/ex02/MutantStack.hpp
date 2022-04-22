#include <stack>
#include <iostream>

template<typename T>
class MyIterator
{
    public:
        T* ptr;
    T   &operator*()
    {
        return *this->ptr; 
    }
    T   &operator++()
    {
        this->ptr++;
        return (this->ptr);
    }
    T   *operator++(int)
    {
        T *tmp = this->ptr;
        this->ptr++;
        return (tmp);
    }
};

//  cant assign a reference
template<typename T>
bool operator!=(MyIterator<T> lhs, MyIterator<T> rhs)
{
    return lhs.ptr != rhs.ptr;
}

template<typename T>
class MutantStack : public std::stack<T>
{
    private:
        MyIterator<T> it;
    public:
        MyIterator<T>  begin()
        {
            MyIterator<T> it;
            it.ptr = &this->top() - this->size() + 1;
            return it; 
        }
        MyIterator<T>  end()
        {
            MyIterator<T> it;
            it.ptr = &this->top() + 1;
            return it; 
        }
};