//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// varNamesDim.h
//
// Code generation for function 'varNamesDim'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
enum class Continuity : int32_T
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
struct emxArray_char_T_1x0 {
  int32_T size[2];
};

struct cell_wrap_4 {
  emxArray_char_T_1x0 f1;
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

// End of code generation (varNamesDim.h)
