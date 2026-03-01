#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
public:
    void writeData() {
        ofstream file("data.txt");
        file << "Hello from class!";
        file.close();
    }

    void readData() {
        ifstream file("data.txt");
        string line;
        getline(file, line);
        cout << line;
        file.close();
    }
};

int main() {
    FileHandler f;
    f.writeData();
    f.readData();
}