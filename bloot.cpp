//simple Baloot calculator in C++ with bad design

/*
=======================
--------i3bdo9---------
=======================
*/

#include <iostream>
using namespace std;

int main() {
    int A, TEN, K, Q, J, ts3h, thmaneh, sb3h;
       A = 11 ;
   TEN = 10;
   K = 4;
   Q = 3;
   J = 2; 
   ts3h = 0;
   thmaneh = 0;
   sb3h = 0;
   cout << "welcome \n " ;
   
   int aceCount;
   cout << "how many aces do you have ? \n";
   cin >> aceCount;
int A_total;
A_total = aceCount * A;
  cout << "your total of aces is : " << A_total ;
  // ACE


int TENcount;
cout << "\n hoq many of TENs do ou have ? ";
cin >> TENcount;
int TEN_total;
TEN_total = TENcount * TEN;
cout << "your total of TENs is : " << TEN_total;
//TEN

  int kingCount;
  cout << "\n how many of kings do you have ? ";
  cin >> kingCount;
  int K_total;
  K_total = kingCount * K;
  cout << "your total of kings : " << K_total;
  // KING


  int QueenCount;
  cout << "\n how many of Queens do you have ?";
  cin >>QueenCount;
  int Q_total;
  Q_total = QueenCount * Q;
  cout << "your total of Queens is : " << Q_total;
  //Queens  


  int JCount;
  cout << "\n how many of Js do you have ?";
  cin >>JCount;
  int J_total;
  J_total = JCount * J;
  cout << "your total of J is : " << J_total;
//J


  int ts3hCount;
  cout << "\n how many of ts3h do you have ?";
  cin >>ts3hCount;
  int ts3h_total;
  ts3h_total = ts3hCount * ts3h;
  cout << "your total of ts3h is : " << ts3h_total;
  //ts3h


      int thmanehCount;
  cout << "\n how many of thmaneh do you have ?";
  cin >>thmanehCount;
  int thmaneh_total;
  thmaneh_total = thmanehCount * thmaneh;
  cout << "your total of thmaneh is : " << thmaneh_total;
  //thmaneh


  int sb3hCount;
  cout << "\n how many of sb3h do you have ?";
  cin >>sb3hCount;
  int sb3h_total;
  sb3h_total = sb3hCount * sb3h;
  cout << "\n your total of ts3h is : " << sb3h_total << "\n";
//sb3h


int final_total;
final_total = sb3h_total + thmaneh_total + ts3h_total + TEN_total + J_total + Q_total + K_total + A_total;
cout << "your final total is :" << final_total;

    return 0;
}
