//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rowNamesDim.h
//
// Code generation for function 'rowNamesDim'
//

#ifndef ROWNAMESDIM_H
#define ROWNAMESDIM_H

// Include files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
class rowNamesDim {
public:
  static void subs2inds(const boolean_T rawsubscripts[6], double *numIndices,
                        double *maxIndex);
};

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

#endif
// End of code generation (rowNamesDim.h)
