//
// Created by abodi on 06/04/2020.
//

#ifndef ANCESTOR_TREE_A_FAMILYTREE_HPP
#define ANCESTOR_TREE_A_FAMILYTREE_HPP
#include <string>
#include <iostream>
using namespace std;
namespace family {
    class Node{
    private:
        Node* m_left;
        Node* m_right;
        std::string m_name;
    public:
       // Node(){}
        Node( std::string name)
        {
            (*this).m_name= name;
        }
    };
    class Tree {
    Node* root; /*youngest*/
    public:
        Tree(){this->root=NULL;}
        Tree(const std::string str)
        {
            this->root=new Node(str);
        }
        Node* Get_root(){return this->root;}

        int addFather(const string son, const string parent)
        {
            return 404;
        }

        int addMother(const string son, const string mother)
        {
            return 404;
        }

        void display()
        {

        }
        string relation(const string str)
        {
            return  "INCOMPLETE";
        }
        string find(const string str)
        {
            return "INCOMPLETE";
        }
        void remove(const string target)
        {

        }
    };
}

#endif //ANCESTOR_TREE_A_FAMILYTREE_HPP
