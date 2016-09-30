/** 
 *  @file    challenge3.cpp
 *  @author  Ibar Romay 
 *  @github  rowmatrix  
 *  @date    09/29/2016 
 *  
 *  @brief alphabetical cesar cipher to encrypt and decrypt messages
 *
 *  
 */

#include <iostream>
#include <string> 
#include <cstdlib>
using namespace std;

string encrypt(string, int);
string decrypt(string, int);


int main(int argc, char *argv[])
{
    /**
     *  options:
     *    e - encrypt message
     *    d - decrypt message
     *    k - key/shift for ceasar cipher
     */

    string message;
    int key;
    char option;

    if( argc < 4 ){
        cout << "Usage: ./solution <message/text> <e/d> <k>" << endl;
        return 1;
    } 

    message = argv[1]; 
    option  = argv[2];
    key     = atoi( argv[3] );

    if( option == 'e' or option == 'E' ){
        cout << "encryption" << endl;
    }
    else if( option == 'd' or option == 'D' ){
        cout << "decryption" << endl;
    }
    else {
        cout << "e or d was not accepted" << endl;
    }

    return 0;
}

string encrypt(string msg, int k){

}

string decrypt(string msg, int k){

}