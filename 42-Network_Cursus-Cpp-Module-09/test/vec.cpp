/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:24:51 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/03 14:37:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <array>
#include <list>
#include <set>
#include <map>
#include <iostream>

// // STD::SET Testing------------------------------------------
//     class Person {
//     public:
//         Person(const std::string& name, int age) : name_(name), age_(age) {}


//         Person(const Person &org_obj)
//         {
// 	        std::cout << "|| Span || Copy constructor called" << std::endl;
//             this->age_ = org_obj.age_;
//             this->name_ = org_obj.name_;
//         }
//         std::string getName() const {
//             return name_;
//         }
        
//         int getAge() const {
//             return age_;
//         }

//         // Custom comparison operator for sorting
//         bool operator<(const Person& obj) const {
//             return age_ < obj.age_;
//         }

//     private:
//         std::string name_;
//         int age_;
//     };

// int main() {
    
//     std::set<Person> personSet;
//     personSet.insert(Person("Alice", 25));
//     personSet.insert(Person("HOL", 25));
//     personSet.insert(Person("Fas", 70));

//     std::set<Person>::iterator it;
//     for (it = personSet.begin(); it != personSet.end(); it++)
//         std::cout << "the Name : " << it->getName() + " he's age is :" << it->getAge() << std::endl;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------//
// ------------------------------------------------------------------------------------------------------------------------------------//

int main()
{
    // { 
    //     std::vector<int> vec;
    //     vec.reserve(4);
    //     std::cout << "size : " << vec.size() << std::endl;
    //     std::cout << "capacity : " << vec.capacity() << std::endl;
    //     vec.push_back(50);
    //     vec.push_back(500);
    //     vec.push_back(5000);
    //     vec.push_back(50000);
    //     vec.push_back(500000);
    //     std::cout << "size : " << vec.size() << std::endl;
    //     std::cout << "capacity : " << vec.capacity() << std::endl;
    //     std::cout << vec.at(1000) << std::endl;
    //     std::cout << vec[1] << std::endl;
    //     std::cout << vec.at(2) << std::endl;
	//     std::cout << vec.at(3) << std::endl; 
    //     }
    // {
    //     std::deque<int> dq;
    //     dq.push_back(5);
    //     dq.push_back(50);
    //     dq.push_back(500);
    //     dq.push_front(-5);
    //     std::deque<int>::iterator it;
    //     for(it = dq.begin(); it != dq.end(); it++)
    //         std::cout << *it << std::endl;
    // }
    //  {
    //     std::array<int, 5> arr;
    //     arr[0] = 20;
    //     arr[1] = 122;
    //     arr[2] = -2147483648;
    //     std::array<int,5>::iterator it;
    //     for(it = arr.begin(); it != arr.end(); it++)
    //         std::cout << "-->>> " << *it << std::endl;
    //     std::cout << arr[0] << std::endl;
    //     std::cout << arr[1] << std::endl;
    //     std::cout << arr[2] << std::endl;
    //     std::cout << arr.size() << std::endl;
    //     std::cout << arr.data() << std::endl;
    //     std::cout << "Begin :: " << arr.begin() << std::endl;
    //     std::cout << arr.end() << std::endl;
    // }
    // {
    //       std::list<int> lt;
    //       lt.push_back(20);
    //       lt.push_back(3);
    //       lt.push_back(-4);
    //       lt.push_back(334);
    //       lt.push_back(-444);
    //       lt.sort();
    //       std::list<int>::iterator it = lt.begin();
    //       std::advance(it, 1);
    //       lt.erase(it);
    //       for (it = lt.begin(); it != lt.end(); it++)
    //         std::cout << *it << std::endl;
    // }
    // {
    //     std::set<int> set; 
    //     // Inserting elements into the set
    //     set.insert(2);
    //     set.insert(5);
    //     set.insert(3);
    //     set.insert(3);

    //     std::set<int>::iterator it;
    //     for (it = set.begin(); it != set.end(); it++)
    //         std::cout << *it << " ";
    //     std::cout << std::endl;
    //     }
    {
        std::map<std::string, std::vector<int> > map;
        map["RABAT"].push_back(1);
        map["JADIDA"].push_back(55);
        map["KHOURIBGA"].push_back(57);
        map["CASABLANCA"].push_back(72);
        map["CASABLANCA"].push_back(9);
        map["TANGER"].push_back(40);
        map["CASABLANCA"].push_back(8);
        map["CASABLANCA"].push_back(6);
        map["BERRCHID"].push_back(81);
        std::map<std::string, std::vector<int> >::iterator it;
        for (it = map.begin(); it != map.end(); it++)
        {
            std::cout << it->first << " : ";
            for (std::vector<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++)
                std::cout << *it2 << " ";
            std::cout << std::endl;  
        }
            // std::cout << it->first << " -> " << it->second << std::endl;
    }
}
