Assume you are designing an auto booking app named "Chennai Auto". For the trail version of the app initially the service is provide for Tambaram, Vandalur, Kelambakkam, Medavakkam, Customer book a ride from source to destination (eg. Vandalur to Kelamabakkam). If any auto is available in Vandalur and the rate is acceptable then ride will be booked successfully.

Initially the Admin of ChennaiAuto will fix amount based on distance between source and destination. The rate of ride for 1 kilometer is Rs. 10. If the distance between Vandalur and Kelambakkam is 20km then admin will fix the rate as Rs. 200 in the initial.

There are three categories of Autos are there.

• Category 1- Accepts ride for Rs.10/km

• Category 2-Accepts ride for Rs.12/km

• Category 3-Accepts ride for Rs.13/km

Initially in all places there exist 1 Auto on each category (ie 3 autos in each places). When the customer is booking a ride the Admin calculates the Initial rate based on the distance between source and destination and then admin finds the auto who can afford this rate and book issuccessful. If the rate is not in acceptable range for the available auto then admin of Chennai auto increases the fare by 10% and shows to customer.

If the customer accepts the increased amount, then admin again find the auto and it goes on until any of the category auto accepts the ride. If No auto is available in the given source then booking is unsuccessful.

Distance:

Tambaram-Vandalur: 15 km

Tambaram-Kelambakkam: 35 km

Tambaram-Medavakkam: 15 km

Vandalur-Kelamabakkam: 20 km

Vandalur-Medavakkam: 40 km

There are Three classes Admin, Auto, and Customer. Customer has data members as name, source and destination and member function booking().

Admin has members as no of autos in tambaram, no of autos in vandalur, no of autos in kelambakkam and no of autos in medavakkam. Request name, source, destination. Initialize these using parameterized constructor. Admin member functions are calculate distance () and find auto) to find the auto available in requested source place and available for amount fixed

Auto class has data members as source and rate. Accept() in auto class will return accept or not accept to find auto function.

Input:

Christy

Tambaram

Vandalur

Jason

Tambaram

Kelambakkam

Tambaram

Medavakkam

Karthi

Kelambakkam

Vandalur

Output

Christy, your ride has booked successfully and ride fare is Rs. 150
 Jason, your ride has booked successfully and ride fare is Rs. 420
 Varun, your ride has booked successfully and ride fare is Rs. 195
 Karthi, your ride has booked successfully and ride fare is Rs. 200

#include <iostream>
using namespace std;

static int autos[4] = {3,3,3,3};

class Admin {
private:
    string name, source, destination;
public:
    static int distance(string s1, string s2) {
        int p1_index, p2_index;
        string cities[4] = { "Tambaram", "Vandalur", "Kelambakkam", "Medavakkam" };
        for (int i = 0; i < 4; i++) {
            if (cities[i] == s1) {
                p1_index = i;
            }
            else if (cities[i] == s2) {
                p2_index = i;
            }
        }
        if (p1_index == 0) {
            if (p2_index == 1 || p2_index == 3) {
                return 15;
            }
            else if (p2_index == 2) {
                return 35;
            }
        }
        else if (p1_index == 1) {
            if (p2_index == 2) {
                return 20;
            }
            else if (p2_index == 3) {
                return 40;
            }
        }
        if (p2_index == 0) {
            if (p1_index == 1 || p1_index == 3) {
                return 15;
            }
            else if (p1_index == 2) {
                return 35;
            }
        }
        else if (p2_index == 1) {
            if (p1_index == 2) {
                return 20;
            }
            else if (p1_index == 3) {
                return 40;
            }
        }
    }

    static void fare(string s1, string s2, string name, int d) {
        int price[3] = {10,12,13};
        int p1_index, p2_index;
        string cities[4] = { "Tambaram", "Vandalur", "Kelambakkam", "Medavakkam" };
        for (int i = 0; i < 4; i++) {
            if (cities[i] == s1) {
                p1_index = i;
            }
            else if (cities[i] == s2) {
                p2_index = i;
            }
        }
        cout << name << ", your ride has booked successfully and ride fare is Rs. " << d * price[(3-autos[p1_index] < 0) ? (0) : (3-autos[p1_index])] << endl;
        autos[p1_index]--;
        autos[p2_index]++;
    }
};

class Customer {
private:
    string name, source, destination;
public:
    Customer(string n, string s, string d) {
        name = n;
        source = s;
        destination = d;
    }

    void booking() {
        Admin::fare(source, destination, name, Admin::distance(source, destination));
    }
};

int main()
{
    Customer c1("Christy", "Tambaram", "Vandalur");
    Customer c2("Jason", "Tambaram", "Kelambakkam");
    Customer c3("Varun", "Tambaram", "Medavakkam");
    Customer c4("Karthi", "Kelambakkam", "Vandalur");
    c1.booking();
    c2.booking();
    c3.booking();
    c4.booking();
    return 0;
}
