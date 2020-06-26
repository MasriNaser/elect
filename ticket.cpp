#include <iostream>
#include <string>
using namespace std;

void issue_ticket(int x, string pname);

int main(int argc, char const *argv[])
{
  string name;
  cout << " Name" << endl;
  cin >> name;
  issue_ticket(125, name);
  //
  cout << "ur name" << endl;
  cin >> name;
  issue_ticket(125, name);
  return 0;
}

// issue_ticket
void issue_ticket(int flight_no, string pname)
{
  static int ticket_no = 0;
  cout << "*******************************" << endl;
  cout << " Flight_number: " << flight_no << endl;
  cout
      << " Ticket no: " << ++ticket_no << endl;
  cout << " Issue for: " << pname << endl;
}