#include <cstdint>
#include <format>
#include <iostream>

// clang-format off
#include "old2.h"
#include "old1.h"
// clang-format on

import tlp;

int main() {
  using namespace std;
  cout << format("{:0X}", MAX_SIGNAL) << endl;

  uint32_t dword{0x08'01'00'11};
  auto header{reinterpret_cast<TLPHeader *>(&dword)};
  cout << format(
              "PDF = 0x{0:#04X}, SuppID = 0x{1:#b}, Rsvd = 0x{2:#04X}, HopID = "
              "{3:#04X}, Length = {4}, HEC = 0x{5:#04X}",
              int(header->PDF), int(header->SuppID), int(header->Rsvd),
              int(header->HopID), int(header->Length), int(header->HEC))
       << endl;
}
