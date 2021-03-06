//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// varNamesDim.h
//
// Code generation for function 'varNamesDim'
//

#ifndef VARNAMESDIM_H
#define VARNAMESDIM_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
enum Continuity
{
  unset = 0, // Default value
  continuous,
  step,
  event
};

}
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder
struct cell_wrap_4 {
  coder::empty_bounded_array<char, 2U> f1;
};

namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
class varNamesDim {
public:
  static void subs2inds(varNamesDim *updatedObj);
  static void
  logicalIndices2Numeric(const boolean_T logicalIndices[6],
                         ::coder::array<double, 2U> &numericIndices);
  cell_wrap_4 descrs[3];
  cell_wrap_4 units[3];
  Continuity continuity[3];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
};

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

#endif
// End of code generation (varNamesDim.h)
