#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//Simranjit Bhella
//2/8/2022
//CS163
//The purpose of this code is to set up the structs and classes required for the binary search tree program.
//These include the node struct, list struct, and graph class. The graph class has the public functions: constructor, destructor,
//add node, add edge, print graph.

//Not super sure if this is correct, but this is what I have so far

struct vertex
{
    int data;
    struct node * head;
};

struct node
{
    vertex * adjacenct;
    node* next;
};



class Graph {
public:
    Graph(int size);
    ~Graph();
    int insertvertex(int to_add);
    int addnode(int dest);
    int addedge(int src, int dest);
    int displaygraph();
private:
    vertex * adjacency_list;
    int list_size;


    int numverticies;
    struct list *graph;
    struct node * createnode (int size);
    int creategraph(int vert);
};

