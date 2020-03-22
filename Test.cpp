#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of f and b and p, and lower & upper case") {
    string text = "Success is not final failure is not fatal it is the courage to continue that counts";
    CHECK(find(text, "binal") == string("final"));
    CHECK(find(text, "pataL") == string("fatal"));
    CHECK(find(text, "FailUre") == string("failure"));
    CHECK(find(text, "CouNts") == string("counts"));
    
}



TEST_CASE("Test replacement of v and w, and lower & upper case") {
    string text = "the best argument against democracy is a five minute conversation with the average voter";
    CHECK(find(text, "Vith") == string("with"));
    CHECK(find(text, "woter") == string("voter"));
    CHECK(find(text, "Voter") == string("voter"));
    CHECK(find(text, "DemOcrAcy") == string("democracy"));
}



TEST_CASE("Test replacement of g and j, and lower & upper case") {
    string text = "If you are going through hell keep going";
    CHECK(find(text, "Joinj") == string("going"));
    CHECK(find(text, "tHrouJh") == string("through"));
    CHECK(find(text, "joinG") == string("going"));
    CHECK(find(text, "iF") == string("If"));
}




TEST_CASE("Test replacement of s and z, and lower & upper case") {
    string text = "A pessimist sees the difficulty in every opportunity an optimist sees the opportunity in every difficulty";
    CHECK(find(text, "peZzimiSt") == string("pessimist"));
    CHECK(find(text, "oPtimizt") == string("optimist"));
    CHECK(find(text, "zeez") == string("sees"));
    CHECK(find(text, "SeeZ") == string("sees"));
}



TEST_CASE("Test replacement of d and t, and lower & upper case") {
    string text = "this report by its very length defends itself against the Tisk if being read";
    CHECK(find(text, "Tefents") == string("defends"));
    CHECK(find(text, "reporD") == string("report"));
    CHECK(find(text, "reat") == string("read"));
    CHECK(find(text, "risk") == string("Tisk"));
}



TEST_CASE("Test replacement of o and u, and lower & upper case") {
    string text = "I have nothing tU offer but bluud toil tears and sweat ";
    CHECK(find(text, "blood") == string("bluud"));
    CHECK(find(text, "nUthing") == string("nothing"));
    CHECK(find(text, "tOil") == string("toil"));
    CHECK(find(text, "to") == string("tU"));
}




TEST_CASE("Test replacement of i and y, and lower & upper case") {
    string text = "Russia is a rYddle wrapped in a mystery inside an Enygma";
    CHECK(find(text, "RussYa") == string("Russia"));
    CHECK(find(text, "riddle") == string("rYddle"));
    CHECK(find(text, "YnsIde") == string("inside"));
    CHECK(find(text, "enigma") == string("Enygma"));
}




TEST_CASE("Test replacement of p and b") {
    string text = "It has been said that democracy is the worst form of government except all the others that have been tried";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "history is written by the victors";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}




TEST_CASE("Test replacement of p and b") {
    string text = "the enemy of my enemy is my friend";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}




TEST_CASE("Test replacement of p and b") {
    string text = "If a man does his best what else is there";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}





TEST_CASE("Test replacement of p and b") {
    string text = "Courage is fear hoding on a minute longer";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}


TEST_CASE("Test replacement of p and b") {
    string text = "If everyone is thinking alike then sombody isn't thinking ";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "Battle is an orgy of disorder";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "Success is how high you bounce when you hit bottom";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "Better to fight for something than live for nothing";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}




TEST_CASE("Test replacement of p and b") {
    string text = "It is not that I am so smart it is just that I stay with problems longer ";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "Pure mathematics is in its way the poetry of logical ideas";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "Love is a better teacher than duty";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "When the solution is simple God is answering";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "God always takes the simpelst way";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}




TEST_CASE("Test replacement of p and b") {
    string text = "The faster you go the shorter you are";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}




TEST_CASE("Test replacement of p and b") {
    string text = "Information is not knowledge";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}



TEST_CASE("Test replacement of p and b") {
    string text = "Coincidence is Gods way of remaining anonymous";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}




TEST_CASE("Test replacement of p and b") {
    string text = "live laught love";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

