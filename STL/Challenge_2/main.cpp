// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
   
    std::cout << "You implement this function"<< std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    auto it = playlist.begin();
    while(it != playlist.end()){
        std::cout << *it << std::endl;
        it++;
    }
    
    std::cout << "Current song:"<< std::endl << current_song << std::endl;
}

int main() {

    char press{'\0'};
    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    std::string name, artist;
    int rating{0};
                
    std::cout << "To be implemented" << std::endl;
    // step 1 - on boot up display the list
    display_playlist(playlist, *current_song);
    // step 2 - start of prompt
    while(press != 'Q'){
        display_menu();
        std::cin >> press;
        switch (press)
        {
            case 'F':
                //play first song
                current_song = playlist.begin();
                break;
            case 'N':
                // play next song
                if((++current_song) == playlist.end())
                    current_song= playlist.begin();
                break;
            case 'P':
                // play prev song
                 if(current_song == playlist.begin()){
                    current_song= (--playlist.end());
                 }else{
                     current_song--;
                 }
                break;
            case 'A':
                // Add and play a new song at curr location
               std::cout << "Enter song name: ";
                std::cin >> name; 
                std::cout << "Enter song artist: ";
                std::cin >> artist; 
                std::cout << "\nEnter song rating (1-5): ";
                std::cin >> rating; 
                playlist.insert(current_song, Song(name, artist, rating));
                current_song--;
                break;
            case 'L':
                // list the current playlist
                display_playlist(playlist, *current_song);
                break;
            case 'Q':
                break;
            default:
                std::cout << "Enter a valid character" << std::endl;
                break;
        }
    }

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}