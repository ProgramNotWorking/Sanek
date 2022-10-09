#ifndef SANEK_SECEXCHANGE_H
#define SANEK_SECEXCHANGE_H

#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

class SecExchange {
private:
    string brand;
    float interPrice;
    float finalPrice;
    vector <float> allPrices;
    vector <string> allBrands;
    vector <float> allPercents;

public:
    SecExchange(string brand);
    ~SecExchange();
    float countFinalPrice();

private:
    float setFinalPrice(float result);
    const string &getBrand() const;
    float getInterPrice() const;
    float getFinalPrice() const;
    static void setLists(vector <float> allPrices, vector <string> allBrands, vector <float> allPercents);
    float count(vector <float> allPrices, int number, float percent);
    void displayInfo();
};


#endif //SANEK_SECEXCHANGE_H
