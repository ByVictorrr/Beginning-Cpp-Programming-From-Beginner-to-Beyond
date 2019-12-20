/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"


    Movies::~Movies(){
        for(int i = 0; i < movies.size(); i++){
            delete movies.at(i);
        }
    }

    // find_movie : returns the index at which the movie of name is or -1 for not in here ( helper function)
    int Movies::find_movie(std::string name){
        for(int i = 0; i < this->movies.size(); i++){
            if (movies.at(i)->get_name() == name){
                return i;
            }
        }
        return -1;
    }
    bool Movies::add_movie(std::string name, std::string rating, int watched){
        int index;
        if((index = find_movie(name)) == -1){ // that isn't found
            movies.push_back(new Movie(name, rating, watched));
            return true;
        }else{
            return false;
        }
    }
    void Movies::display(){
        for (size_t i = 0; i < movies.size(); i++)
            movies.at(i)->print();
    }

   bool Movies::increment_watched(std::string name){
        int index;
        if((index = find_movie(name))!=-1){
            movies.at(index)->times_watched++;
            std::cout << "Movie: " << name << " incremented" <<std::endl;
            return true;
        }else{
            std::cout << "Movie: " << name << " DNE" <<std::endl;
            return false;
        }
    }