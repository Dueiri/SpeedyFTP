/*
9/6/25
CLI functions meant for managing the FTP server
David Dueiri
*/


#pragma once
#include <string>
#include <vector>
#include <sstream>

namespace CLI {
    /*
    A namespace for managing all of the CLI functionality
    */

    /**
     * @brief Parses the user's command line input.
     * 
     * This function tokenizes the input string to identify the command
     * and its arguments.
     * 
     * @param inputValue The raw string input from the user. It will be modified.
     * @return a vector of chars which can be accessed by other modules.
     */
    std::vector<char> parseInputs(std::string& inputValue)
    {
        
        std::stringstream ss(inputValue);
        std::string token;
        std::vector<std::string> tokens;
        while (ss >> token) {
            tokens.push_back(token);
        }
        //tokenize string




    };

}
