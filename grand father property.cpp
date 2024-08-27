#include <iostream>
#include <vector>
using namespace std;

class PropertyDistribution {
private:
    double totalProperty;
    int numGrandsons;
public:
    PropertyDistribution(double property, int grandsons) : totalProperty(property), numGrandsons(grandsons) {}

   
    void distributeEqually() {
        double equalShare = totalProperty / numGrandsons;
        cout << "Equal Distribution:" << endl;
        for (int i = 1; i <= numGrandsons; i++) {
            cout << "Grandson " << i << ": " << equalShare << " crores" << endl;
        }
        cout << endl;
    }

   
    void distributeProportionally(vector<double>& ratios) {
        double totalRatio = 0;
        for (int i = 0; i < ratios.size(); i++) {
            totalRatio += ratios[i];
        }

        cout << "Proportional Distribution:" << endl;
        for (int i = 0; i < numGrandsons; i++) {
            double share = (ratios[i] / totalRatio) * totalProperty;
            cout << "Grandson " << (i + 1) << ": " << share << " crores" << endl;
        }
        cout << endl;
    }

    // Function to distribute property based on custom shares
    void distributeCustom(vector<double>& shares) {
        cout << "Custom Distribution:" << endl;
        for (int i = 0; i < numGrandsons; i++) {
            cout << "Grandson " << (i + 1) << ": " << shares[i] << " crores" << endl;
        }
        cout << endl;
    }
};

int main() {
    double propertyValue = 500;  // Total property value in crores
    int grandsons = 3;  // Number of grandsons

    PropertyDistribution distribution(propertyValue, grandsons);

    // Equal distribution
    distribution.distributeEqually();

    // Proportional distribution based on predefined ratios
    double ratioArray[] = {1.0, 2.0, 3.0};  // Example ratio array
    vector<double> ratios(ratioArray, ratioArray + sizeof(ratioArray) / sizeof(double));  // Convert array to vector
    distribution.distributeProportionally(ratios);

    // Custom distribution with specific shares
    double shareArray[] = {100, 150, 250};  // Example shares array
    vector<double> customShares(shareArray, shareArray + sizeof(shareArray) / sizeof(double));  // Convert array to vector
    distribution.distributeCustom(customShares);

    return 0;
}

