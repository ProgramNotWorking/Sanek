#include <iostream>
#include <string>
#include "SecExchange.h"

using namespace std;

int main() {

    string brandName;
    cout << "Enter brand name: ";
    getline(cin, brandName);

    SecExchange secExchange(brandName);
    secExchange.countFinalPrice();
}
