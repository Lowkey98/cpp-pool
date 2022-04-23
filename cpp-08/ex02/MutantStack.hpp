#include <stack>
#include <iostream>
#include<list>



template<typename T>
class MutantStack : public std::stack<T>
{
public:
    class iterator
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
            return (*this->ptr);
        }
        T   &operator--()
        {
            this->ptr--;
            return (*this->ptr);
        }
        T   *operator++(int)
        {
            T *tmp = this->ptr;
            this->ptr++;
            return (tmp);
        }
        T   *operator--(int)
        {
            T *tmp = this->ptr;
            this->ptr--;
            return (tmp);
        }
        bool operator!=(MutantStack::iterator rhs)
        {
            return this->ptr != rhs.ptr;
        }
    };
        MutantStack<T>::iterator  begin()
        {
            MutantStack<T>::iterator it;
            it.ptr = &this->top() - this->size() + 1;
            return it; 
        }
        MutantStack<T>::iterator  end()
        {
            MutantStack<T>::iterator it;
            it.ptr = &this->top() + 1;
            return it; 
        }
        MutantStack<T>::iterator it;
};

//  cant assign a reference

