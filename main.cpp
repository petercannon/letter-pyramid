// Modularised Letters Pyramid
#include <iostream>
#include <string>

void get_input( std::string& );
void print_spaces( int, int );
void print_letters_up_to_position( std::string&, int );
void print_current_letter( char );
void print_letters_after_position( std::string&, int );
void print_new_line();

int main() {
    std::string letters {};
    
    // get input
    get_input( letters );
    
    int position {};
    int letters_length = letters.length();
    
    for ( auto c: letters ) {
        // spaces
        print_spaces( letters_length, position );       
        
        // print letters upto position
        print_letters_up_to_position( letters, position );        
                
        // print character at position
        print_current_letter( c );
                
        // print characters after position
        print_letters_after_position( letters, position );
        
        // print new line
        print_new_line();
        
        ++position;
    }
    
    return 0;
}

void get_input( std::string &input) {
    std::cout << "Enter some characters so I can make a pyramid out of them: ";
    getline( std::cin, input );
}

void print_spaces( int length, int position ) {
    int spaces = length - position;
    while ( spaces > 0 ) {
        std::cout << " ";
        --spaces;
    } 
}

void print_letters_up_to_position( std::string &letters, int position ) {
    for ( int i = 0; i < position; i++ ) {
       std::cout << letters.at( i );
    }
}
void print_current_letter( char c ) {
    std::cout << c;
}

void print_letters_after_position( std::string &letters, int position ) {
    for ( int i = position - 1; i >= 0; i-- ) {
       std::cout << letters.at( i );
    }
}

void print_new_line() {
    std::cout << std::endl;    
}
