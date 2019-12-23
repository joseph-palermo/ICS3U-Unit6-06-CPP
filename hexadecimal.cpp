// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: December 2019
// This program converts a word to hexadecimal

#include <iostream>
#include <string>
#include <list>
#include <map>

std::list<std::string> convert(std::string userWord) {
    // This function converts a word to hexadecimal

    // variables and lists
    std::list<std::string> characters;
    std::map<std::string, std::string> hexadecimal = {
        {"A", "41"},
        {"B", "42"},
        {"C", "43"},
        {"D", "44"},
        {"E", "45"},
        {"F", "46"},
        {"G", "47"},
        {"H", "48"},
        {"I", "49"},
        {"J", "4a"},
        {"K", "4b"},
        {"L", "4c"},
        {"M", "4d"},
        {"N", "4e"},
        {"O", "4f"},
        {"P", "50"},
        {"Q", "51"},
        {"R", "52"},
        {"S", "53"},
        {"T", "54"},
        {"U", "55"},
        {"V", "56"},
        {"W", "57"},
        {"X", "58"},
        {"Y", "59"},
        {"Z", "5a"},
        {"a", "61"},
        {"b", "62"},
        {"c", "63"},
        {"d", "64"},
        {"e", "65"},
        {"f", "66"},
        {"g", "67"},
        {"h", "68"},
        {"i", "69"},
        {"j", "6a"},
        {"k", "6b"},
        {"l", "6c"},
        {"m", "6d"},
        {"n", "6e"},
        {"o", "6f"},
        {"p", "70"},
        {"q", "71"},
        {"r", "72"},
        {"s", "73"},
        {"t", "74"},
        {"u", "75"},
        {"v", "76"},
        {"w", "77"},
        {"x", "78"},
        {"y", "79"},
        {"z", "7a"},
    };

    // process
    for (int counter = 0; counter < userWord.length(); counter++) {
        std::string userWordCharacter(1, userWord.at(counter));
        if (hexadecimal.count(userWordCharacter) > 0) {
            characters.push_back(hexadecimal[userWordCharacter]);
        } else {
            std::cout << "Error, unable to find unicode character" \
                      << std::endl;
        }
    }

    // output
    return characters;
}

int main() {
    // This function outputs a word inputted by the user in hexadecimal

    // variables
    std::string word;
    std::list<std::string> hexadecimalWord;

    // input
    std::cout << "Enter a word here:" << std::endl;
    std::getline(std::cin, word);
    std::cout << "" << std::endl;

    // process
    hexadecimalWord = convert(word);

    // output
    for (std::string counter : hexadecimalWord) {
        std::cout << counter << " ";
    }
}
