#pragma once

#include <iostream>
#include <algorithm>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <list>


using namespace std;

struct node;
int name = 0;

struct position {
    GLfloat x;
    GLfloat y;
};

struct tracks {
    node* b_point;
    INT16 weight;
};

struct node {
    list<tracks*> t;
    int name;
    bool visited;
    position pos;
};
class graph {
public:
    list<node*> v;
public:
    graph() {
      
    }

    graph(int n) {
        for (int i = 0; i < n; ++i) {
            node* temp = new node;
            temp->name = name++;
            v.push_back(temp);
            for (int j = 0; j < n; ++j) {
                tracks* track = new tracks;
                track->weight = 0;
                track->b_point = nullptr;
                temp->t.push_back(track);
            }
        }
        name = 0;

    }

    void change_count(int n) {
        name = 0;
        list<node*> current;
        for (int i = 0; i < n; ++i) {
            node* temp = new node;
            temp->name = name++;
            current.push_back(temp);
            for (int j = 0; j < n; ++j) {
                tracks* track = new tracks;
                track->weight = 0;
                track->b_point = nullptr;
                temp->t.push_back(track);
            }
        }

        this->v = current;
        current.clear();
       
    }

    int get_weight(int index1, int index2 ){
        auto iter1 = v.begin();
        advance(iter1, index1);

        auto iter2 = v.begin();
        advance(iter2, index2);

       node* temp1 = *iter1;
       node* temp2 = *iter2;

       auto iter3 = (temp1->t).begin();
        advance(iter3, index2);

       tracks* track = *iter3;
       return track->weight;
    

    }
  

    void add_track(int index1, int index2, INT16 w) {
        auto iter1 = v.begin();
        advance(iter1, index1);

        auto iter2 = v.begin();
        advance(iter2, index2);

        node* temp1 = *iter1;
        node* temp2 = *iter2;

        auto iter3 = (temp1->t).begin();
        advance(iter3, index2);

        tracks* track = *iter3;
        track->weight = w;
        track->b_point = temp2;

      

    }


};