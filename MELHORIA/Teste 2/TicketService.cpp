#include "TicketService.h"
#include <iostream>

TicketService::TicketService(const std::string& name) : name_(name) {}
std::string TicketService::name() const {return name_;}
void TicketService::add_ticket(const ticket& t) {tickets_.push_back(t);}
void TicketService::resolve_ticket(const std::string& id) {
    int i = 0, s = 0;
    for (auto kv : tickets_) {
        if (kv.id == id) {
            s = i;
        }
        i++;
    }
    tickets_.erase(tickets_.begin() + s);
}
int TicketService::count_tickets(const std::string& creator) const {
    int s = 0;
    for (auto kv : tickets_) {
        if (kv.creator == creator) {
            s++;
        }
    }
    return s;
}

int main() {
    { TicketService ts("HelpDesk-CICA");
  std::cout << ts.name() << ' '
       << ts.count_tickets("Maria") << ' ' 
       << ts.count_tickets("Manuel") << '\n';  }
       { TicketService ts("HelpDesk-CICA");
  ticket at[] = { {"XY000", "Maria"}, {"XY123", "Manuel"}, {"WZ123", "Walter"}, {"BA789",  "Maria"}, {"XY1000", "Maria"} };
  for (ticket t: at) ts.add_ticket(t);
  std::cout << ts.name() << ' '
       << ts.count_tickets("Maria") << ' ' 
       << ts.count_tickets("Manuel") << ' ' 
       << ts.count_tickets("Walter") << '\n'; }
       { TicketService ts("HelpDesk-CICA");
        ticket at[] = { {"XY000", "Maria"}, {"XY123", "Manuel"}, {"WZ123", "Walter"}, {"BA789",  "Maria"}, {"XY1000", "Maria"} };
        for (ticket t: at) ts.add_ticket(t);
        ts.resolve_ticket("BA789");
        ts.resolve_ticket("WZ123");
        std::cout << ts.name() << ' '
             << ts.count_tickets("Maria") << ' ' 
             << ts.count_tickets("Manuel") << ' ' 
             << ts.count_tickets("Walter") << '\n'; }
        { TicketService ts("UzerBeatz");
                ticket ats[] = { {"XY170", "Maria"}, {"HV5956", "Roberto"}, {"XY1035",  "Roberto"} };
                for (ticket t: ats) ts.add_ticket(t);
                ts.resolve_ticket("XY1035");
                std::cout << ts.name() << ' '
                     << ts.count_tickets("Roberto") << ' ' 
                     << ts.count_tickets("Maria") << ' ' 
                     << ts.count_tickets("Manuel") << '\n'; }
                     { TicketService ts("UzerBeatz");
                        ticket ats[] = { {"XY1035",  "Maria"}, {"HV5956", "Manuel"}, {"XY170", "Roberto"} };
                        for (ticket t: ats) ts.add_ticket(t);
                        for (ticket t: ats) ts.resolve_ticket(t.id);
                        std::cout << ts.name() << ' ' 
                             << ts.count_tickets("Maria") << ' ' 
                             << ts.count_tickets("Manuel") << ' ' 
                             << ts.count_tickets("Roberto") << '\n'; }
}