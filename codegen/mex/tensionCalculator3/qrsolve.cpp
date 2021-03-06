//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// qrsolve.cpp
//
// Code generation for function 'qrsolve'
//

// Include files
#include "qrsolve.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo mc_emlrtRSI{
    61,        // lineNo
    "qrsolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    72,        // lineNo
    "qrsolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    85,        // lineNo
    "qrsolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    63,       // lineNo
    "xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo qc_emlrtRSI{
    98,             // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    138,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    141,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    143,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    148,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    151,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    154,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo xc_emlrtRSI{
    158,            // lineNo
    "ceval_xgeqp3", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    173,          // lineNo
    "rankFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    172,          // lineNo
    "rankFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    119,         // lineNo
    "LSQFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    128,         // lineNo
    "LSQFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    138,         // lineNo
    "LSQFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    31,         // lineNo
    "xunormqr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    102,              // lineNo
    "ceval_xunormqr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" // pathName
};

static emlrtMCInfo c_emlrtMCI{
    53,        // lineNo
    19,        // colNo
    "flt2str", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    1,        // lineNo
    32,       // colNo
    "xgeqp3", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    61,       // lineNo
    9,        // colNo
    "xgeqp3", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    92,       // lineNo
    22,       // colNo
    "xgeqp3", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    105,      // lineNo
    1,        // colNo
    "xgeqp3", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    97,       // lineNo
    5,        // colNo
    "xgeqp3", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    85,        // lineNo
    26,        // colNo
    "qrsolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    85,        // lineNo
    1,         // colNo
    "qrsolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    119,       // lineNo
    5,         // colNo
    "qrsolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pName
};

static emlrtRSInfo hd_emlrtRSI{
    53,        // lineNo
    "flt2str", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" // pathName
};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2]{1, 14};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 2, &pArrays[0],
                               (const char_T *)"sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

namespace coder {
namespace internal {
void qrsolve(const emlrtStack *sp, const ::coder::array<real_T, 2U> &A,
             const ::coder::array<real_T, 1U> &B, ::coder::array<real_T, 1U> &Y)
{
  static const int32_T iv[2]{1, 6};
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  array<ptrdiff_t, 1U> jpvt_t;
  array<real_T, 2U> b_A;
  array<real_T, 1U> b_B;
  array<real_T, 1U> tau;
  array<int32_T, 2U> jpvt;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T b_na;
  int32_T i;
  int32_T ma;
  int32_T minmana;
  int32_T minmn;
  int32_T na;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &mc_emlrtRSI;
  b_A.set_size(&cc_emlrtRTEI, &st, A.size(0), A.size(1));
  na = A.size(0) * A.size(1);
  for (i = 0; i < na; i++) {
    b_A[i] = A[i];
  }
  minmn = b_A.size(0);
  b_na = b_A.size(1) - 1;
  jpvt.set_size(&dc_emlrtRTEI, &st, 1, b_A.size(1));
  na = b_A.size(1);
  for (i = 0; i < na; i++) {
    jpvt[i] = 0;
  }
  b_st.site = &pc_emlrtRSI;
  ma = b_A.size(0);
  na = b_A.size(1);
  minmana = muIntScalarMin_sint32(ma, na);
  tau.set_size(&ec_emlrtRTEI, &b_st, minmana);
  if ((b_A.size(0) == 0) || (b_A.size(1) == 0)) {
    tau.set_size(&gc_emlrtRTEI, &b_st, minmana);
    for (i = 0; i < minmana; i++) {
      tau[i] = 0.0;
    }
    c_st.site = &qc_emlrtRSI;
    if (b_A.size(1) > 2147483646) {
      d_st.site = &p_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (ma = 0; ma <= b_na; ma++) {
      jpvt[ma] = ma + 1;
    }
  } else {
    jpvt_t.set_size(&fc_emlrtRTEI, &b_st, b_A.size(1));
    na = b_A.size(1);
    for (i = 0; i < na; i++) {
      jpvt_t[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)b_A.size(0), (ptrdiff_t)b_A.size(1),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &(jpvt_t.data())[0], &(tau.data())[0]);
    na = (int32_T)info_t;
    c_st.site = &rc_emlrtRSI;
    if (na != 0) {
      p = true;
      if (na != -4) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &l_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &m_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      c_st.site = &sc_emlrtRSI;
      if (b_A.size(1) > 2147483646) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (int32_T j{0}; j <= b_na; j++) {
        c_st.site = &tc_emlrtRSI;
        if (minmn > 2147483646) {
          d_st.site = &p_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (na = 0; na < minmn; na++) {
          b_A[j * ma + na] = rtNaN;
        }
      }
      i = b_na + 1;
      minmn = muIntScalarMin_sint32(minmn, i);
      c_st.site = &uc_emlrtRSI;
      if (minmn > 2147483646) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = 0; ma < minmn; ma++) {
        tau[ma] = rtNaN;
      }
      na = minmn + 1;
      c_st.site = &vc_emlrtRSI;
      if ((minmn + 1 <= minmana) && (minmana > 2147483646)) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = na; ma <= minmana; ma++) {
        tau[ma - 1] = 0.0;
      }
      c_st.site = &wc_emlrtRSI;
      if (b_na + 1 > 2147483646) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = 0; ma <= b_na; ma++) {
        jpvt[ma] = ma + 1;
      }
    } else {
      c_st.site = &xc_emlrtRSI;
      if (b_A.size(1) > 2147483646) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = 0; ma <= b_na; ma++) {
        jpvt[ma] = (int32_T)jpvt_t[ma];
      }
    }
  }
  st.site = &nc_emlrtRSI;
  ma = 0;
  tol = 0.0;
  if (b_A.size(0) < b_A.size(1)) {
    minmn = b_A.size(0);
    na = b_A.size(1);
  } else {
    minmn = b_A.size(1);
    na = b_A.size(0);
  }
  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * static_cast<real_T>(na)) *
          muDoubleScalarAbs(b_A[0]);
    while ((ma < minmn) &&
           (!(muDoubleScalarAbs(b_A[ma + b_A.size(0) * ma]) <= tol))) {
      ma++;
    }
  }
  if ((ma < minmn) && (!emlrtSetWarningFlag(&st))) {
    char_T str[14];
    b_st.site = &yc_emlrtRSI;
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    c_st.site = &hd_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &c_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &ad_emlrtRSI;
    warning(&b_st, ma, str);
  }
  st.site = &oc_emlrtRSI;
  b_B.set_size(&hc_emlrtRTEI, &st, B.size(0));
  na = B.size(0);
  for (i = 0; i < na; i++) {
    b_B[i] = B[i];
  }
  Y.set_size(&ic_emlrtRTEI, &st, b_A.size(1));
  na = b_A.size(1);
  for (i = 0; i < na; i++) {
    Y[i] = 0.0;
  }
  b_st.site = &bd_emlrtRSI;
  c_st.site = &ed_emlrtRSI;
  if ((b_A.size(0) != 0) && (b_A.size(1) != 0)) {
    info_t = (ptrdiff_t)b_B.size(0);
    i = b_A.size(0);
    minmn = b_A.size(1);
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1,
                            (ptrdiff_t)muIntScalarMin_sint32(i, minmn),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &(tau.data())[0], &(b_B.data())[0], info_t);
    na = (int32_T)info_t;
    d_st.site = &fd_emlrtRSI;
    if (na != 0) {
      boolean_T b_p;
      p = true;
      b_p = false;
      if (na == -7) {
        b_p = true;
      } else if (na == -9) {
        b_p = true;
      } else if (na == -10) {
        b_p = true;
      }
      if (!b_p) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &l_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &b_fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      na = b_B.size(0);
      b_B.set_size(&jc_emlrtRTEI, &c_st, na);
      for (i = 0; i < na; i++) {
        b_B[i] = rtNaN;
      }
    }
  }
  b_st.site = &cd_emlrtRSI;
  if (ma > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (na = 0; na < ma; na++) {
    Y[jpvt[na] - 1] = b_B[na];
  }
  for (int32_T j{ma}; j >= 1; j--) {
    i = jpvt[j - 1];
    Y[i - 1] = Y[i - 1] / b_A[(j + b_A.size(0) * (j - 1)) - 1];
    b_st.site = &dd_emlrtRSI;
    for (na = 0; na <= j - 2; na++) {
      Y[jpvt[na] - 1] = Y[jpvt[na] - 1] -
                        Y[jpvt[j - 1] - 1] * b_A[na + b_A.size(0) * (j - 1)];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

} // namespace internal
} // namespace coder

// End of code generation (qrsolve.cpp)
