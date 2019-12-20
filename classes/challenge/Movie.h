/******************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>

class Movie{
    private:
        std::string name;
        std::string rating;
        int times_watched;
    public:
        friend class Movies;
        Movie(std::string name="None", std::string rating="X", int watched=0);
        Movie(Movie && lhs); // move constructor
        ~Movie();
        void set_movie(std::string name);
        void set_rating(std::string rating);
        std::string get_name(){return this->name;}
        std::string get_rating(){return this->rating;}
        int get_times_watched(){return times_watched;}
        void print(){
            std::cout << "{name: " << name << ", rating: " << rating << ", times watched: " << times_watched << "}"<< std::endl;
        }
};

#endif // _MOVIE_H_
