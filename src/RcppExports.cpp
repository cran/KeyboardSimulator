// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mouse_left_click
void mouse_left_click();
RcppExport SEXP _KeyboardSimulator_mouse_left_click() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    mouse_left_click();
    return R_NilValue;
END_RCPP
}
// mouse_left_hold
void mouse_left_hold();
RcppExport SEXP _KeyboardSimulator_mouse_left_hold() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    mouse_left_hold();
    return R_NilValue;
END_RCPP
}
// mouse_left_release
void mouse_left_release();
RcppExport SEXP _KeyboardSimulator_mouse_left_release() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    mouse_left_release();
    return R_NilValue;
END_RCPP
}
// mouse_right_click
void mouse_right_click();
RcppExport SEXP _KeyboardSimulator_mouse_right_click() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    mouse_right_click();
    return R_NilValue;
END_RCPP
}
// mouse_right_hold
void mouse_right_hold();
RcppExport SEXP _KeyboardSimulator_mouse_right_hold() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    mouse_right_hold();
    return R_NilValue;
END_RCPP
}
// mouse_right_release
void mouse_right_release();
RcppExport SEXP _KeyboardSimulator_mouse_right_release() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    mouse_right_release();
    return R_NilValue;
END_RCPP
}
// press_c
void press_c(Rcpp::NumericVector x);
RcppExport SEXP _KeyboardSimulator_press_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    press_c(x);
    return R_NilValue;
END_RCPP
}
// press_and_release_c
void press_and_release_c(Rcpp::NumericVector x);
RcppExport SEXP _KeyboardSimulator_press_and_release_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    press_and_release_c(x);
    return R_NilValue;
END_RCPP
}
// release_c
void release_c(Rcpp::NumericVector x);
RcppExport SEXP _KeyboardSimulator_release_c(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    release_c(x);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_KeyboardSimulator_mouse_left_click", (DL_FUNC) &_KeyboardSimulator_mouse_left_click, 0},
    {"_KeyboardSimulator_mouse_left_hold", (DL_FUNC) &_KeyboardSimulator_mouse_left_hold, 0},
    {"_KeyboardSimulator_mouse_left_release", (DL_FUNC) &_KeyboardSimulator_mouse_left_release, 0},
    {"_KeyboardSimulator_mouse_right_click", (DL_FUNC) &_KeyboardSimulator_mouse_right_click, 0},
    {"_KeyboardSimulator_mouse_right_hold", (DL_FUNC) &_KeyboardSimulator_mouse_right_hold, 0},
    {"_KeyboardSimulator_mouse_right_release", (DL_FUNC) &_KeyboardSimulator_mouse_right_release, 0},
    {"_KeyboardSimulator_press_c", (DL_FUNC) &_KeyboardSimulator_press_c, 1},
    {"_KeyboardSimulator_press_and_release_c", (DL_FUNC) &_KeyboardSimulator_press_and_release_c, 1},
    {"_KeyboardSimulator_release_c", (DL_FUNC) &_KeyboardSimulator_release_c, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_KeyboardSimulator(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
