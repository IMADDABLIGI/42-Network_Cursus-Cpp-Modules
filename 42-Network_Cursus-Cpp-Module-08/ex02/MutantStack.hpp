// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   MutantStack.hpp                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/11/15 15:41:12 by idabligi          #+#    #+#             */
// /*   Updated: 2023/11/15 16:16:26 by idabligi         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack();
        MutantStack(const MutantStack &org_obj);
        MutantStack &operator=(const MutantStack &org_obj);
        ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::iterator const_iterator;
    iterator begin(){
        return (this->c.begin());
    }
    iterator end(){
        return (this->c.end());
    }
    const_iterator begin() const {
        return (this->c.begin());
    }
    const_iterator end() const {
        return (this->c.end());
    }
};

template <typename T>
MutantStack<T>::MutantStack(){
    std::cout << "|| MutantStack || Default constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & org_obj)
{
    std::cout << "|| MutantStack || Copy constructor called" << std::endl;
    *this = org_obj;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &org_obj)
{
    std::cout << "|| MutantStack || Copy assignment operator called" << std::endl;
    std::stack<T>::operator=(org_obj);
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "|| MutantStack || Destructor called" << std::endl;
}

#endif