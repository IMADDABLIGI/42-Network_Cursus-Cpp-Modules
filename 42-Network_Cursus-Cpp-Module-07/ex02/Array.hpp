/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:11:11 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/14 14:37:03 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *ptr;
        unsigned int len;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &org_obj);
        Array &operator=(const Array<T> &org_obj);
        ~Array();
        
        unsigned int size();
        T           *getPtr();
        T &operator[] (unsigned int n);
        const T &operator[] (unsigned int n) const ;
        class BracketsException : public std::exception
		{
			public:
			    const char* what() const throw();
		};
};

//----------------------------Constructors----------------------------//

template <typename T>
Array<T>::Array() : ptr(NULL), len(0)
{
    std::cout << "|| Array || Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : len(n)
{
    std::cout << "|| Array || Constructor called" << std::endl;
    if (!len)
        ptr = NULL;
    else
        ptr = new T[n];
}

//-----------------------Copy Constructor-----------------------------//

template <typename T>
Array<T>::Array(const Array<T> &org_obj)
{
    std::cout << "|| Array || Copy constructor called" << std::endl;
    ptr = NULL;
    *this = org_obj;
}

//-----------------------Overload Operation----------------------------//

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &org_obj)
{
    std::cout << "|| Array || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->len = org_obj.len;
        delete ptr;
        if (!len)
            ptr = NULL;
        else
            ptr = new T[len];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
    std::cout << "|| Array || Brackets operator called" << std::endl;
    if (n >= len || this->ptr == NULL)
        throw (Array<T>::BracketsException());
    return (this->ptr[n]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int n) const
{
    std::cout << "|| Array || Brackets operator called" << std::endl;
    if (n >= len || this->ptr == NULL)
        throw (Array<T>::BracketsException());
    return (this->ptr[n]);
}

//----------------------------Destructors-----------------------------//

template <typename T>
Array<T>::~Array(){
    std::cout << "|| Array || Destructor called" << std::endl; 
    delete this->ptr;
}

//----------------------------Implementations-------------------------//

template <typename T>
const char*    Array<T>::BracketsException::what() const throw(){
    return "Error invalid Index !"; }

template <typename T>
unsigned int Array<T>::size(){   
    return (this->len);}

template <typename T>
T *Array<T>::getPtr(){
    return (ptr);
}

#endif