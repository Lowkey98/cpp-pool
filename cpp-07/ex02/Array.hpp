

#include <iostream>
template <typename T>
class Array
{
    public:
        Array()
        {
            this->_arr = new T[0];
            this->_size = 0;
        }
        Array(unsigned int n)
        {
            this->_size = n;
            this->_arr = new T[n];
            for (unsigned int i = 0; i < n; i++)
            {
                this->_arr[i] = 0;
            }
        }
        Array(const Array<T>& a)
        {
            // std::cout << "Copy constructor called" << std::endl;
            *this = a;
        }
        Array <T> &operator=(const Array<T>& a)
        {
            // std::cout << "Assignment operator called" << std::endl;
            this->_size = a._size;
            this->_arr = new T[_size];
            // this->_size = a._size;
            for (unsigned int i = 0; i < a.size(); i++)
            {
                // break;
                this->_arr[i] = a._arr[i];
            }
            return *this;
        }
        ~Array()
        {
            delete [] this->_arr;
        }
        unsigned int size() const
        {
            return this->_size;
        }
        T& operator[](unsigned int i)
        {
            if (i >= this->_size || i < 0)
            {
                throw std::exception();
            }
            // std::cout << "operator[]" << std::endl;
            return this->_arr[i];
        }

    private:
        T* _arr;
        unsigned int _size;
};