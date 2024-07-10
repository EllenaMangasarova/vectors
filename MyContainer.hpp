#ifndef MY_CONTAINER_HPP
#define MY_CONTAINER_HPP

#include <vector>

template<typename T>
class MyContainer 
{
private:
    std::vector<T> data;
    
public:
    MyContainer() = default;

    typename std::vector<T>::iterator begin();
    typename std::vector<T>::const_iterator cbegin() const;
    typename std::vector<T>::iterator end();
    typename std::vector<T>::const_iterator cend() const;

    typename std::vector<T>::reverse_iterator rbegin();
    typename std::vector<T>::const_reverse_iterator crbegin() const;
    typename std::vector<T>::reverse_iterator rend();
    typename std::vector<T>::const_reverse_iterator crend() const;
};

template<typename T>
inline typename std::vector<T>::iterator MyContainer<T>::begin() 
{
    typename std::vector<T>::iterator beginIterator = data.begin();
    return beginIterator;
}

template<typename T>
inline typename std::vector<T>::const_iterator MyContainer<T>::cbegin() const 
{
    typename std::vector<T>::const_iterator cbeginIterator = data.cbegin();
    return cbeginIterator;
}

template<typename T>
inline typename std::vector<T>::iterator MyContainer<T>::end() 
{
    typename std::vector<T>::iterator endIterator = data.end();
    return endIterator;
}

template<typename T>
inline typename std::vector<T>::const_iterator MyContainer<T>::cend() const 
{
    typename std::vector<T>::const_iterator cendIterator = data.cend();
    return cendIterator;
}

template<typename T>
inline typename std::vector<T>::reverse_iterator MyContainer<T>::rbegin() 
{
    typename std::vector<T>::reverse_iterator rbeginIterator = data.rbegin();
    return rbeginIterator;
}

template<typename T>
inline typename std::vector<T>::const_reverse_iterator MyContainer<T>::crbegin() const 
{
    typename std::vector<T>::const_reverse_iterator crbeginIterator = data.crbegin();
    return crbeginIterator;
}

template<typename T>
inline typename std::vector<T>::reverse_iterator MyContainer<T>::rend() 
{
    typename std::vector<T>::reverse_iterator rendIterator = data.rend();
    return rendIterator;
}

template<typename T>
inline typename std::vector<T>::const_reverse_iterator MyContainer<T>::crend() const 
{
    typename std::vector<T>::const_reverse_iterator crendIterator = data.crend();
    return crendIterator;
}

#endif 

