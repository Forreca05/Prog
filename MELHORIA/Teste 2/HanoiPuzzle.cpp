#include "HanoiPuzzle.h"

int Tower::top() const {return disks_.empty() ? 0 : disks_.back();}
void Tower::add(int disk) {disks_.push_back(disk);}
void Tower::remove() {if (disks_.size() > 0) disks_.pop_back();}

std::ostream& operator<<(std::ostream& os, const Tower& t) {
    os << "[ ";
    for (auto kv : t.get_disks()) os << kv << ' ';
    os << "]";
}

void HanoiPuzzle::move(const vector<disk_move>& dmoves)
{
  for (auto dm : dmoves) {
    int dfrom = towers_[dm.first].top();
    int dto = towers_[dm.second].top();
    // cout << dm.first << ' ' << dm.second << ' ' << str() << endl;
    if (dfrom == 0 || (dto != 0 && dfrom > dto)) {
      continue;
    }
    towers_[dm.first].remove();
    towers_[dm.second].add(dfrom);
  }
}