#include "graph.h"
//The purpose of this file is to implement the functions from graph.h
//As ADT classes, all function do not directly interact with the appliction (except for display functionality).
//ALl functions besides constructor and destructor return 0 or 1 to announce failure or success.

//Unsure of how to approach constructor and destructor here, but this is what I have so far.

Graph::Graph(int size) {
adjacency_list = new vertex[size];
for (int i = 0, i < size, ++i) {
    adjacency_list[i].data = 0;
    adjacency_list[i].head = nullptr;
}
list_size = size;
}

int Graph::insertvertex(int to_add) {
    int i = 0;
    while (adjacency_list[i] != 0) {}


}






//Private function that creates a new node and returns it
struct node * Graph::createnode(int size) {
    struct node * newnode = new node;
    newnode->vertex = size;
    newnode->next = nullptr;
    return newnode;
}

//Private function that creates a graph
int Graph::creategraph(int vert) {
    list * Graph = new list;
    Graph->numverticies = vert;

    Graph->adjlists = new *node[size];

    for (int i = 0; i < vert; i++) {
        Graph->adjlists[i] = nullptr;
    }
    return 1;
}

//Public function to add an edge based on soruce and destination
int Graph::addedge(int src, int dest) {
    node * newnode = new node;

    newnode->next = Graph->adjlists[dest];
    Graph->adjlists[dest] = newnode;

    newnode = createnode(src);
    newnode->next = Graph->adjlists[dest];
    Graph->adjlists[dest] = newnode;
}

//Public function to display the graph
int Graph::displaygraph() {
    for (int i = 0; i < Graph->numverticies; ++i) {
        node * tmp = Graph->adjlists[i];
        cout << "In vertex " << i << ":" << endl;
        while (tmp) {
            cout << tmp->vertex << endl;
            tmp = tmp->next;
        }

    }
}



