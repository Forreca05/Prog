#ifndef __TicketService_h__
#define __TicketService_h__

#include <string>
#include <vector>

struct ticket {
  std::string id;      // "C519" => unique value
  std::string creator; // "Maria", ...
};

class TicketService {
public:
  // constructor
  TicketService(const std::string& name);

  // member functions
  std::string name() const;
  void add_ticket(const ticket& t);
  void resolve_ticket(const std::string& id);
  int count_tickets(const std::string& creator) const;
private:
  std::string name_;
  std::vector<ticket> tickets_;
};

#endif