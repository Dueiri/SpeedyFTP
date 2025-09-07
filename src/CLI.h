/*
9/6/25
CLI functions meant for managing the FTP server
David Dueiri
*/


#pragma once
#include <string>
#include <vector>
#include <sstream>

class CLI_parser{

    public:
    /**
     * @brief Parses the user's command line input.
     * 
     * This function tokenizes the input string to identify the command
     * and its arguments.
     * 
     * @param inputValue The raw string input from the user. It will be modified.
     * @param cmd A pointer to a char that will contain the cmd code
     * @param args A pointer to a std::vector that contains args that may be accessed in the future by other parts of the cli.
     * @return a vector of chars which can be accessed by other modules.
     */
    void parseInputs(std::string& inputValue, char* cmd, std::vector<char>* args)
    {
        
        std::stringstream ss(inputValue);
        std::string token;
        std::vector<std::string> tokens;
        while (ss >> token) {
            tokens.push_back(token);
        }
    private:
    
    std::vector<std::string> tokenizeInput(std::string cmdString)
        {
            std::stringstream ss(cmdString);
            std::string token;
            std::vector<std::string> tokens;
            while (ss >> token) {
                tokens.push_back(token);
            }
            return tokens;
        }
        
        //tokenize string






    };
};

};
