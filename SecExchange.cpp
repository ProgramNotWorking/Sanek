#include "SecExchange.h"

SecExchange::SecExchange(std::string brand) {
    this->brand = brand;
}

SecExchange::~SecExchange() = default;

const string &SecExchange::getBrand() const { return this->brand; }

float SecExchange::getInterPrice() const { return this->interPrice; }

float SecExchange::getFinalPrice() const { return this->finalPrice; }

void SecExchange::displayInfo() {
    cout << "Brand name: " << getBrand();
    cout << "Inter price: " << getInterPrice();
    cout << "Final price: " << getFinalPrice();
}

void SecExchange::setLists (vector <float> allPrices, vector <string> allBrands, vector <float> allPercents) {
    allPrices = { 315, 1020, 1813, 8418 };
    allBrands = {"Сбербанк", "ИЖСталь", "Глобал", "Акрон" };
    allPercents = { 27.51, 141.37, 127.29, 65.12 };
}

float SecExchange::countFinalPrice() {
    setLists(this->allPrices, this->allBrands, this->allPercents);

    bool isHasInList = false;
    float result;

    for (int i = 0; i < allBrands.size(); i++) {
        if (getBrand() == allBrands.at(i)) {    // Короче не сравнивает строку с элементом
            result = count(this->allPrices, i, allPercents.at(i));
            isHasInList = true;
        }
    }

    if (isHasInList) {
        setFinalPrice(result);
        displayInfo();
    } else {
        cout << "Incorrect input data" << endl;
    }

}

float SecExchange::setFinalPrice(float result) {
    this->finalPrice = result;
}

float SecExchange::count(vector <float> allPrices, int number, float percent) {
    return allPrices.at(number) / 100 * percent;
};