//simple Baloot calculator in C++ with bad design

/*
=======================
--------i3bdo9---------
=======================
*/

#include <iostream>
using namespace std;

int main() {
    int A, TEN, K, Q, J, ts3h, thmaneh, sb3h, sra, _5msen, meaa, arb3mea;
       A = 11 ;
   TEN = 10;
   K = 4;
   Q = 3;
   J = 2; 
   ts3h = 0;
   thmaneh = 0;
   sb3h = 0;
   sra = 4;
   _5msen = 10;
   meaa = 20;
   arb3mea = 40;
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


int sraCount;
cout << "\n if there is a sra type \"1\" if there is not type \"0\" ";
cin >> sraCount;
int sra_total;
sra_total = sraCount * sra;
cout << "\n your sra = " << sra_total << "\n"; 
// السرا


int _5msenCount;
cout << "\n if there is a 5msen type \"1\" if there is not type \"0\"";
cin >> _5msenCount;
int _5msen_total;
_5msen_total = _5msenCount * _5msen;
cout << "\n your 5msen = " << _5msen_total << "\n";
//الخمسين


int meaaCount;
cout << "\n if there is a meaa type \"1\" if there is not type \"0\"";
cin >> meaaCount;
int meaa_total;
meaa_total = meaaCount * meaa;
cout << "\n your meaa = " << meaa_total << "\n";
//الميا


int arb3meaCount;
cout << "\n if there is a arb3mea type \"1\" if there is not type \"0\"";
cin >> arb3meaCount;
int arb3mea_total;
arb3mea_total = arb3meaCount * arb3mea;
cout << "\n your arb3mea = " << arb3mea_total << "\n";
//اربع ميا


int final_total;
final_total = sb3h_total + thmaneh_total + ts3h_total + TEN_total + 
J_total + Q_total + K_total + A_total + sra_total + _5msen_total + meaa_total + arb3mea_total;
cout << "your final total is :" << final_total;

    return 0;
}
