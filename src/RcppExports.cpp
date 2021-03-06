// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// getEigenSpace
List getEigenSpace(NumericMatrix Xs);
RcppExport SEXP cidr_getEigenSpace(SEXP XsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Xs(XsSEXP);
    rcpp_result_gen = Rcpp::wrap(getEigenSpace(Xs));
    return rcpp_result_gen;
END_RCPP
}
// eigen_centre
List eigen_centre(NumericMatrix Ms, NumericMatrix Ds);
RcppExport SEXP cidr_eigen_centre(SEXP MsSEXP, SEXP DsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Ms(MsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ds(DsSEXP);
    rcpp_result_gen = Rcpp::wrap(eigen_centre(Ms, Ds));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dist
NumericMatrix cpp_dist(NumericMatrix dist, IntegerMatrix truth, NumericMatrix counts, int ncol, double threshold);
RcppExport SEXP cidr_cpp_dist(SEXP distSEXP, SEXP truthSEXP, SEXP countsSEXP, SEXP ncolSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist(distSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type truth(truthSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dist(dist, truth, counts, ncol, threshold));
    return rcpp_result_gen;
END_RCPP
}
// cpp_dist_weighted
NumericMatrix cpp_dist_weighted(NumericMatrix dist, IntegerMatrix truth, NumericMatrix counts, int ncol, double a, double b);
RcppExport SEXP cidr_cpp_dist_weighted(SEXP distSEXP, SEXP truthSEXP, SEXP countsSEXP, SEXP ncolSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist(distSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type truth(truthSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_dist_weighted(dist, truth, counts, ncol, a, b));
    return rcpp_result_gen;
END_RCPP
}
