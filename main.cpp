#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Problem 1: Print an ID Card\n\n";
    cout << "+---------------------------------------+\n";
    cout << "|          STUDENT ID CARD              |\n";
    cout << "+---------------------------------------+\n";
    cout << "| Name:       Shahribonu                |\n";
    cout << "| 250206:     Lab2_YOUR_ID              |\n";
    cout << "| Course:     CS102                     |\n";
    cout << "| Term:       SPRING 2026               |\n";
    cout << "+---------------------------------------+\n";



    cout << "Problem 2: Escape Sequences Practice\n";
    cout << " He said:\"I like C++\""<<endl;
    cout << " C:\\Users\\Student\\CS102"<<endl;
    cout << " Name\t Score\t"<<endl;
    cout << " Shahri\t 95\t"<<endl;
    cout << " Neyla\t 91\t"<<endl;

    cout << "+-----------+-----------+-----------+-----------+-----------+\n";
    cout << "|    Time   |    Mon    |    Tue     |    Wed    |    Thu   |\n";
    cout << "+-----------+-----------+-----------+-----------+-----------+\n";
    cout << "|   09:00   |   CS102   |    Math   |   CS102   |  Physics  |\n";
    cout << "|   11:00   |  English  |  CS Lab   |   Math    |   CS102   |\n";
    cout << "|   14:00   |  Physics  |  English  |   Free    |    Math   |\n";
    cout << "+-----------+-----------+-----------+-----------+-----------+\n";


    cout << "+--------------------------------------+\n";
    cout << "|           CS102 TOOL MENU            |\n";
    cout << "+--------------------------------------+\n";
    cout << "|           1) Print ID Card           |\n";
    cout << "|           2) Show Schedule           |\n";
    cout << "|           3) Generate Receipt        |\n";
    cout << "|           4) About                   |\n";
    cout << "|           5) Exit                    |\n";
    cout << "+--------------------------------------+\n";
    cout << "|      Author: Shahribonu Lab #2       |\n";
    cout << "+--------------------------------------+\n";

    cout << left << setw(12) << "Item"
<< right << setw(10) << "Price" << endl;
    cout << left << setw(12) << "Pen"
    << right << setw(10) << fixed << setprecision(2) << 1.5 << endl;
    cout << left << setw(12) << "Notebook"
    << right << setw(10) << fixed << setprecision(2) << 4.25 << endl;


    cout << fixed << setprecision(2);

    cout << "=========== RECEIPT ===========" << endl;
    cout << left << setw(10) << "Item"
         << setw(5) << "Qty"
         << setw(8) << "Price"
         << setw(10) << "Subtotal" << endl;

    cout << left << setw(10) << "item1"
         << setw(5) << "1"
         << setw(8) << "4.50"
         << setw(10) << "9.00" << endl;

    cout << left << setw(10) << "item2"
         << setw(5) << "2"
         << setw(8) << "2.00"
         << setw(10) << "sub2" << endl;

    cout << "-------------------------------" << endl;
    cout << right<< setw(20) << "Subtotal:"
         << setw(20) << "11.00" <<endl;
    cout <<right << setw(22) << "Tax (12%): "
         << setw(18) << "1.32" << endl;
    cout << right << setw(18) << "Total: "
         << setw(22) << "12.32" << endl;
     cout << "===============================" << endl;
    return 0;
}




