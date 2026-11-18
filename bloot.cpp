#include <iostream>
#include <string>
using namespace std;
string a;
int second();
int main()
{
  cout << "welcome !" << endl;
  cout << "hkm or 9n ?" << endl;
  cin >> a;
  if (a == "9n")
  {
    int A, TEN, K, Q, J, ts3h, thmaneh, sb3h;
    A = 11;
    TEN = 10;
    K = 4;
    Q = 3;
    J = 2;
    ts3h = 0;
    thmaneh = 0;
    sb3h = 0;
    cout << "welcome \n ";
    int aceCount;
    cout << "how many aces do you have ? \n";
    cin >> aceCount;
    int A_total;
    A_total = aceCount * A;
    cout << "your total of aces is : " << A_total;
    // ACE

    int TENcount;
    cout << "\n how many of TENs do ou have ? ";
    cin >> TENcount;
    int TEN_total;
    TEN_total = TENcount * TEN;
    cout << "your total of TENs is : " << TEN_total;
    // TEN

    int kingCount;
    cout << "\n how many of kings do you have ? ";
    cin >> kingCount;
    int K_total;
    K_total = kingCount * K;
    cout << "your total of kings : " << K_total;
    // KING

    int QueenCount;
    cout << "\n how many of Queens do you have ?";
    cin >> QueenCount;
    int Q_total;
    Q_total = QueenCount * Q;
    cout << "your total of Queens is : " << Q_total;
    // Queens

    int JCount;
    cout << "\n how many of Js do you have ?";
    cin >> JCount;
    int J_total;
    J_total = JCount * J;
    cout << "your total of J is : " << J_total;
    // J

    int ts3hCount;
    cout << "\n how many of ts3h do you have ?";
    cin >> ts3hCount;
    int ts3h_total;
    ts3h_total = ts3hCount * ts3h;
    cout << "your total of ts3h is : " << ts3h_total;
    // ts3h

    int thmanehCount;
    cout << "\n how many of thmaneh do you have ?";
    cin >> thmanehCount;
    int thmaneh_total;
    thmaneh_total = thmanehCount * thmaneh;
    cout << "your total of thmaneh is : " << thmaneh_total;
    // thmaneh

    int sb3hCount;
    cout << "\n how many of sb3h do you have ?";
    cin >> sb3hCount;
    int sb3h_total;
    sb3h_total = sb3hCount * sb3h;
    cout << " your total of sb3h is : " << sb3h_total << endl;
    // sb3h

    string sra;
    int sraPossibility;
    cout << "do you have sra ? yes or no " << endl;
    cin >> sra;
    if (sra == "yes" || sra == "YES" || sra == "Yes")
    {
      sraPossibility = 4;
      cout << "your total of sra is = " << sraPossibility << endl;
    }

    else
    {
      sraPossibility = 0;
      cout << "your total of sra is = " << sraPossibility << endl;
    }
    // السرا

    string _5msen;
    int _5msenPossibility;
    cout << "do you have 5msen ? yes or no" << endl;
    cin >> _5msen;
    if (_5msen == "yes" || _5msen == "YES" || _5msen == "Yes")
    {
      _5msenPossibility = 10;
      cout << "your total of 5msen = " << _5msenPossibility << endl;
    }
    else
    {
      _5msenPossibility = 0;
      cout << "your total of 5msen = " << _5msenPossibility << endl;
    }
    // الخمسين

    string meaa;
    int meaaPossibilty;
    cout << "do you have meaa ? yes or no" << endl;
    cin >> meaa;
    if (meaa == "yes" || meaa == "YES" || meaa == "Yes")
    {
      meaaPossibilty = 20;
      cout << "your total of meaa = " << meaaPossibilty << endl;
    }

    else
    {
      meaaPossibilty = 0;
      cout << "your total of meaa = " << meaaPossibilty << endl;
    }
    // المية

    string arb3mea;
    int arb3meaPossibilty;
    cout << "do you have arb3mea ? " << endl;
    cin >> arb3mea;
    if (arb3mea == "yes" || arb3mea == "YES" || arb3mea == "Yes")
    {
      arb3meaPossibilty = 40;
      cout << "your total of arb3mea = " << arb3meaPossibilty << endl;
    }

    else
    {
      arb3meaPossibilty = 0;
      cout << "your total of arb3mea = " << arb3meaPossibilty << endl;
    }
    // اربع مية

    int final_total;
    final_total = sb3h_total + thmaneh_total + ts3h_total + TEN_total +
                  J_total + Q_total + K_total + A_total + sraPossibility +
                  _5msenPossibility + meaaPossibilty + arb3meaPossibilty;
    cout << "your final total is :" << final_total;
  }

  if (a == "hkm")
  {
    second();
  }

  return 0;
}

int second()
{
  int A, TEN, K, Q, J, ts3h, thmaneh, sb3h, sra, _5msen, meaa, arb3mea;
  A = 11;
  TEN = 10;
  K = 4;
  Q = 3;
  J = 20;
  ts3h = 14;
  thmaneh = 0;
  sb3h = 0;
  sra = 2;
  _5msen = 5;
  meaa = 10;

  int aceCount;
  cout << " welcome !" << endl;
  cout << "how many aces do you have ? \n";
  cin >> aceCount;
  int A_total;
  A_total = aceCount * A;
  cout << "your total of aces is : " << A_total;
  // ACE

  int TENcount;
  cout << "\n how many of TENs do ou have ? ";
  cin >> TENcount;
  int TEN_total;
  TEN_total = TENcount * TEN;
  cout << "your total of TENs is : " << TEN_total;
  // TEN

  int kingCount;
  cout << "\n how many of kings do you have ? ";
  cin >> kingCount;
  int K_total;
  K_total = kingCount * K;
  cout << "your total of kings : " << K_total;
  // KING

  int QueenCount;
  cout << "\n how many of Queens do you have ?";
  cin >> QueenCount;
  int Q_total;
  Q_total = QueenCount * Q;
  cout << "your total of Queens is : " << Q_total;
  // Queens

  int JCount;
  cout << "\n how many of Js do you have ?";
  cin >> JCount;
  int J_total;
  J_total = JCount * J;
  cout << "your total of J is : " << J_total;
  // J

  int ts3hCount;
  cout << "\n how many of ts3h do you have ?";
  cin >> ts3hCount;
  int ts3h_total;
  ts3h_total = ts3hCount * ts3h;
  cout << "your total of ts3h is : " << ts3h_total;
  // ts3h

  int thmanehCount;
  cout << "\n how many of thmaneh do you have ?";
  cin >> thmanehCount;
  int thmaneh_total;
  thmaneh_total = thmanehCount * thmaneh;
  cout << "your total of thmaneh is : " << thmaneh_total;
  // thmaneh

  int sb3hCount;
  cout << "\n how many of sb3h do you have ?";
  cin >> sb3hCount;
  int sb3h_total;
  sb3h_total = sb3hCount * sb3h;
  cout << " your total of sb3h is : " << sb3h_total << endl;
  // sb3h

  /*اي متغير متكرر مكتوب عنده 2 هذا معناته انه للحكم
  sra.2
  _5msen.2
  etc...
  */

  string sra2;
  int sraPossibility;
  cout << "do you have sra ? yes or no " << endl;
  cin >> sra2;
  if (sra2 == "yes" || sra2 == "Yes" || sra2 == "YES")
  {
    sraPossibility = 2;
    cout << "your total of sra is = " << sraPossibility << endl;
  }

  else
  {
    sraPossibility = 0;
    cout << "your total of sra is = " << sraPossibility << endl;
  }
  // السرا

  string _5msen2;
  int _5msenPossibility;
  cout << "do you have 5msen ? yes or no" << endl;
  cin >> _5msen2;
  if (_5msen2 == "yes" || _5msen2 == "YES" || _5msen2 == "Yes")
  {
    _5msenPossibility = 5;
    cout << "your total of 5msen = " << _5msenPossibility << endl;
  }
  else
  {
    _5msenPossibility = 0;
    cout << "your total of 5msen = " << _5msenPossibility << endl;
  }
  // الخمسين

  string meaa2;
  int meaaPossibilty;
  cout << "do you have meaa ? yes or no" << endl;
  cin >> meaa2;
  if (meaa2 == "yes" || meaa2 == "YES" || meaa2 == "Yes")
  {
    meaaPossibilty = 10;
    cout << "your total of meaa = " << meaaPossibilty << endl;
  }

  else
  {
    meaaPossibilty = 0;
    cout << "your total of meaa = " << meaaPossibilty << endl;
  }
  // مية

  int final_total;
  final_total = sb3h_total + thmaneh_total + ts3h_total + TEN_total +
                J_total + Q_total + K_total + A_total + sraPossibility +
                _5msenPossibility + meaaPossibilty;
  cout << "your final total is :" << final_total;
  return 0;
}