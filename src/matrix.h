#pragma once

#include "algorithm.h"

namespace SymMatMul {

  class Line {
  public:
    Line(const int xSign_, const int ySign_, const int c_) {}
  };

  enum ConstraintType {
    GTE_ZERO,
    LTE_ZERO,
    EQ_ZERO,
    LT_ZERO,
    GT_ZERO,    
  };

  class Constraint {
  public:
    Constraint(const Line l, const ConstraintType tp) {}
  };

  class Region {
  };

  class Matrix {
  public:
    Matrix(const int nRows_, const int nCols_) {}

    std::map<ConstraintType, Region*> splitWith(const Line l) {
      return {{GT_ZERO, nullptr}, {LT_ZERO, nullptr}, {EQ_ZERO, nullptr}};
    }
  };

}
