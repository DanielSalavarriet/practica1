#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = numeric_limits<int>::max();
    int maxProfit = 0;

    for (int price : prices) {
        if (price < minPrice)
            minPrice = price;
        else if (price - minPrice > maxProfit)
            maxProfit = price - minPrice;
    }
    return maxProfit;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de días: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Ingrese los precios separados por espacio: ";
    for (int i = 0; i < n; ++i)
        cin >> prices[i];

    int profit = maxProfit(prices);
    cout << "La ganancia máxima es: " << profit << endl;

    return 0;
}
