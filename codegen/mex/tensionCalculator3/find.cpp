//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "warning.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo m_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    382,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    138,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    158,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    253,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    254,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    255,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    239,                           // lineNo
    1,                             // colNo
    "find_first_nonempty_triples", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    369,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    144,    // lineNo
    9,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

// Function Definitions
namespace coder {
void b_eml_find(const emlrtStack *sp, const boolean_T x_data[],
                const int32_T x_size[2], int32_T i_data[], int32_T *i_size,
                int32_T j_data[], int32_T *j_size)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T iv[2];
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nx = x_size[0] << 1;
  if (nx == 0) {
    *i_size = 0;
    *j_size = 0;
  } else {
    int32_T idx;
    int32_T ii;
    int32_T jj;
    boolean_T exitg1;
    st.site = &hb_emlrtRSI;
    idx = 0;
    *i_size = static_cast<int16_T>(nx);
    *j_size = static_cast<int16_T>(nx);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= 2)) {
      boolean_T guard1{false};
      guard1 = false;
      if (x_data[(ii + x_size[0] * (jj - 1)) - 1]) {
        idx++;
        i_data[idx - 1] = ii;
        j_data[idx - 1] = jj;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        ii++;
        if (ii > x_size[0]) {
          ii = 1;
          jj++;
        }
      }
    }
    if (idx > nx) {
      emlrtErrorWithMessageIdR2018a(&st, &i_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx == 1) {
      if (idx == 0) {
        *i_size = 0;
        *j_size = 0;
      }
    } else {
      if (1 > idx) {
        *i_size = 0;
      } else {
        *i_size = idx;
      }
      iv[0] = 1;
      iv[1] = *i_size;
      b_st.site = &jb_emlrtRSI;
      internal::indexShapeCheck(
          &b_st, static_cast<int32_T>(static_cast<int16_T>(nx)), iv);
      if (1 > idx) {
        *j_size = 0;
      } else {
        *j_size = idx;
      }
      iv[0] = 1;
      iv[1] = *j_size;
      b_st.site = &kb_emlrtRSI;
      internal::indexShapeCheck(
          &b_st, static_cast<int32_T>(static_cast<int16_T>(nx)), iv);
      iv[0] = 1;
      if (1 > idx) {
        iv[1] = 0;
      } else {
        iv[1] = idx;
      }
      b_st.site = &lb_emlrtRSI;
      internal::indexShapeCheck(&b_st, nx, iv);
    }
  }
  if ((x_size[0] == 1) && (*i_size != 1)) {
    st.site = &ib_emlrtRSI;
    internal::warning(&st);
  }
}

void eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 1U> &x,
              ::coder::array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0);
  st.site = &m_emlrtRSI;
  idx = 0;
  i.set_size(&x_emlrtRTEI, &st, x.size(0));
  b_st.site = &n_emlrtRSI;
  if ((1 <= x.size(0)) && (x.size(0) > 2147483646)) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&y_emlrtRTEI, &st, 0);
    }
  } else {
    if (1 > idx) {
      nx = 0;
    } else {
      nx = idx;
    }
    iv[0] = 1;
    iv[1] = nx;
    b_st.site = &o_emlrtRSI;
    internal::indexShapeCheck(&b_st, i.size(0), iv);
    i.set_size(&y_emlrtRTEI, &st, nx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
