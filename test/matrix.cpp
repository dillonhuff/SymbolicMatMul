#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "matrix.h"

using namespace std;

namespace SymMatMul {

  TEST_CASE("Creating triangular matrix") {
    Matrix m(3, 3);

    Line diagonal(1, -1, 0); // x - y
    map<ConstraintType, Region*> regions = m.splitWith(diagonal);

    REQUIRE(regions.size() == 3);
    
  }
}
