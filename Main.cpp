#include <iostream>
#include <string>

using namespace std;

class Cypher {
    private:
        int key;

    public:
        Cypher (int aKey){
            key = aKey;
        }

        string decrypt(string cyphertext) {
            string plaintext = "";

            for (char ch : cyphertext) {
                plaintext.push_back(ch-key);
            }

            return plaintext;
        }

        string encrypt(string plaintext) {
            string cyphertext = "";

            for (char ch : plaintext) {
                cyphertext.push_back(ch+key);
            }

            return cyphertext;
        }
};


int main(int argc, char const *argv[])
{   
    Cypher cypher(1);

    string cyphertext = cypher.encrypt("hello");
    cout << cyphertext << endl;

    string plaintext = cypher.decrypt(cyphertext);
    cout << plaintext << endl;
    return 0;
}
