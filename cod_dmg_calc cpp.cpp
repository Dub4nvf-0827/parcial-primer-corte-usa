//inicio
#include <iostream>
using namespace std;

int main() {
	float indmg, dealt_dmg, resdmg;
	int mats;

	cout << "Welcome to COD damage calculator, the materials are as following: Wood = 1, Metal = 2, Concrete = 3. If you don't know the material, type 0" << endl;

	cout << "Enter base damage: ";
	cin >> indmg;

	cout << "Enter material type (1, 2, 3, or 0): ";
	cin >> mats;

	if (mats != 1 && mats != 2 && mats != 3 && mats != 0) {
		cout << "Error, invalid material type. If you don't know the material, type 0." << endl;
	} else {
		if (mats == 1) {  // Wood
			resdmg = indmg - (0.3 * indmg);
			cout << "Resulting damage: " << resdmg << endl;
		} else if (mats == 2) {  // Metal
			resdmg = indmg - (0.5 * indmg);
			cout << "Resulting damage: " << resdmg << endl;
		} else if (mats == 3) {  // Concrete
			resdmg = indmg - (0.7 * indmg);
			cout << "Resulting damage: " << resdmg << endl;
		} else if (mats == 0) {  // Unknown material
			cout << "Enter the damage dealt after reduction: ";
			cin >> dealt_dmg;

			float reduction_percent = (1 - (dealt_dmg / indmg)) * 100;
			string material;

			if (reduction_percent == 30) {
				material = "Wood";
			} else if (reduction_percent == 50) {
				material = "Metal";
			} else if (reduction_percent == 70) {
				material = "Concrete";
			} else {
				material = "Unknown";
			}

			cout << "The material is: " << material << endl;
			resdmg = dealt_dmg;
			cout << "Resulting damage: " << resdmg << endl;
		}
	}

	return 0;
}
