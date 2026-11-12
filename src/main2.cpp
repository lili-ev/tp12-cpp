
#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de ==
    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de !=
    bool operator!=(const Date& d) const {
        return !(*this == d);
    }
};

int main() {
    Date d1(12, 11, 2026);
    Date d2(12, 11, 2026);
    Date d3(15, 10, 2025);

    if (d1 == d2) {
        cout << "Les deux dates sont identiques." << endl;
    } else {
        cout << "Les deux dates sont differentes." << endl;
    }

    if (d1 != d3) {
        cout << "Les deux dates sont differentes." << endl;
    } else {
        cout << "Les deux dates sont identiques." << endl;
    }

    return 0;
}
