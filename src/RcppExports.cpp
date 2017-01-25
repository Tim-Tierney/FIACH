// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// badData
arma::mat badData(Rcpp::NumericMatrix X, NumericVector meds, NumericVector mads, double nMads, double t);
RcppExport SEXP FIACH_badData(SEXP XSEXP, SEXP medsSEXP, SEXP madsSEXP, SEXP nMadsSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type meds(medsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mads(madsSEXP);
    Rcpp::traits::input_parameter< double >::type nMads(nMadsSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    __result = Rcpp::wrap(badData(X, meds, mads, nMads, t));
    return __result;
END_RCPP
}
// colMad
Rcpp::NumericVector colMad(Rcpp::NumericMatrix X);
RcppExport SEXP FIACH_colMad(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    __result = Rcpp::wrap(colMad(X));
    return __result;
END_RCPP
}
// colMedian
Rcpp::NumericVector colMedian(Rcpp::NumericMatrix X);
RcppExport SEXP FIACH_colMedian(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    __result = Rcpp::wrap(colMedian(X));
    return __result;
END_RCPP
}
// colsd
Rcpp::NumericVector colsd(Rcpp::NumericMatrix X);
RcppExport SEXP FIACH_colsd(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    __result = Rcpp::wrap(colsd(X));
    return __result;
END_RCPP
}
// convolve1d
arma::mat convolve1d(arma::mat x, arma::colvec fir, int Nfft, bool subtractMed);
RcppExport SEXP FIACH_convolve1d(SEXP xSEXP, SEXP firSEXP, SEXP NfftSEXP, SEXP subtractMedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type fir(firSEXP);
    Rcpp::traits::input_parameter< int >::type Nfft(NfftSEXP);
    Rcpp::traits::input_parameter< bool >::type subtractMed(subtractMedSEXP);
    __result = Rcpp::wrap(convolve1d(x, fir, Nfft, subtractMed));
    return __result;
END_RCPP
}
// fftN
arma::cx_mat fftN(arma::mat X, int N);
RcppExport SEXP FIACH_fftN(SEXP XSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    __result = Rcpp::wrap(fftN(X, N));
    return __result;
END_RCPP
}
// gmm
Rcpp::List gmm(Rcpp::NumericVector x, int k, Rcpp::NumericVector imeans, Rcpp::NumericVector isd, Rcpp::NumericVector ilambda, bool print, double tol, int maxit);
RcppExport SEXP FIACH_gmm(SEXP xSEXP, SEXP kSEXP, SEXP imeansSEXP, SEXP isdSEXP, SEXP ilambdaSEXP, SEXP printSEXP, SEXP tolSEXP, SEXP maxitSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type imeans(imeansSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type isd(isdSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ilambda(ilambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type print(printSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxit(maxitSEXP);
    __result = Rcpp::wrap(gmm(x, k, imeans, isd, ilambda, print, tol, maxit));
    return __result;
END_RCPP
}
// hampel
arma::mat hampel(arma::mat x, int k, double t0);
RcppExport SEXP FIACH_hampel(SEXP xSEXP, SEXP kSEXP, SEXP t0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type t0(t0SEXP);
    __result = Rcpp::wrap(hampel(x, k, t0));
    return __result;
END_RCPP
}
// pseudo
arma::mat pseudo(Rcpp::NumericMatrix x, Rcpp::NumericMatrix y, bool residuals, bool keepMean, bool includeIntercept);
RcppExport SEXP FIACH_pseudo(SEXP xSEXP, SEXP ySEXP, SEXP residualsSEXP, SEXP keepMeanSEXP, SEXP includeInterceptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< bool >::type keepMean(keepMeanSEXP);
    Rcpp::traits::input_parameter< bool >::type includeIntercept(includeInterceptSEXP);
    __result = Rcpp::wrap(pseudo(x, y, residuals, keepMean, includeIntercept));
    return __result;
END_RCPP
}
// rowMad
Rcpp::NumericVector rowMad(Rcpp::NumericMatrix X);
RcppExport SEXP FIACH_rowMad(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    __result = Rcpp::wrap(rowMad(X));
    return __result;
END_RCPP
}
// rowMedian
Rcpp::NumericVector rowMedian(Rcpp::NumericMatrix X);
RcppExport SEXP FIACH_rowMedian(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    __result = Rcpp::wrap(rowMedian(X));
    return __result;
END_RCPP
}
// rowsd
Rcpp::NumericVector rowsd(Rcpp::NumericMatrix X);
RcppExport SEXP FIACH_rowsd(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    __result = Rcpp::wrap(rowsd(X));
    return __result;
END_RCPP
}
// sepConvolve3d
arma::cube sepConvolve3d(NumericVector x, arma::colvec kernX, arma::colvec kernY, arma::colvec kernZ, int Nx, int Ny, int Nz);
RcppExport SEXP FIACH_sepConvolve3d(SEXP xSEXP, SEXP kernXSEXP, SEXP kernYSEXP, SEXP kernZSEXP, SEXP NxSEXP, SEXP NySEXP, SEXP NzSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type kernX(kernXSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type kernY(kernYSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type kernZ(kernZSEXP);
    Rcpp::traits::input_parameter< int >::type Nx(NxSEXP);
    Rcpp::traits::input_parameter< int >::type Ny(NySEXP);
    Rcpp::traits::input_parameter< int >::type Nz(NzSEXP);
    __result = Rcpp::wrap(sepConvolve3d(x, kernX, kernY, kernZ, Nx, Ny, Nz));
    return __result;
END_RCPP
}
// zero_na
NumericVector zero_na(NumericVector input);
RcppExport SEXP FIACH_zero_na(SEXP inputSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< NumericVector >::type input(inputSEXP);
  __result = Rcpp::wrap(zero_na(input));
  return __result;
  END_RCPP
}
// dilate
Rcpp::NumericVector dilate(Rcpp::NumericVector input, int k);
RcppExport SEXP FIACH_dilate(SEXP inputSEXP, SEXP kSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type input(inputSEXP);
  Rcpp::traits::input_parameter< int >::type k(kSEXP);
  __result = Rcpp::wrap(dilate(input, k));
  return __result;
  END_RCPP
}
// erode
Rcpp::NumericVector erode(Rcpp::NumericVector input, int k);
RcppExport SEXP FIACH_erode(SEXP inputSEXP, SEXP kSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type input(inputSEXP);
  Rcpp::traits::input_parameter< int >::type k(kSEXP);
  __result = Rcpp::wrap(erode(input, k));
  return __result;
  END_RCPP
}
//dcombine
Rcpp::NumericVector dcombine(Rcpp::NumericVector X, Rcpp::IntegerVector dim);
RcppExport SEXP FIACH_dcombine(SEXP XSEXP, SEXP dimSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type X(XSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dim(dimSEXP);
  __result = Rcpp::wrap(dcombine(X, dim));
  return __result;
  END_RCPP
}

//icombine
Rcpp::IntegerVector icombine(Rcpp::IntegerVector X, Rcpp::IntegerVector dim);
RcppExport SEXP FIACH_icombine(SEXP XSEXP, SEXP dimSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type X(XSEXP);
  Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type dim(dimSEXP);
  __result = Rcpp::wrap(icombine(X, dim));
  return __result;
  END_RCPP
}
//allDets
arma::mat allDets(Rcpp::NumericMatrix cps, arma::mat Alpha);
RcppExport SEXP FIACH_allDets(SEXP cpsSEXP, SEXP AlphaSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type cps(cpsSEXP);
  Rcpp::traits::input_parameter< arma::mat >::type Alpha(AlphaSEXP);
  __result = Rcpp::wrap(allDets(cps, Alpha));
  return __result;
  END_RCPP
}
// concat1
Rcpp::CharacterVector concat1(Rcpp::CharacterMatrix x, int margin);
RcppExport SEXP FIACH_concat1(SEXP xSEXP, SEXP marginSEXP) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type x(xSEXP);
  Rcpp::traits::input_parameter< int >::type margin(marginSEXP);
  rcpp_result_gen = Rcpp::wrap(concat1(x, margin));
  return rcpp_result_gen;
  END_RCPP
}
// concat2
void concat2(Rcpp::CharacterMatrix x, int margin, Rcpp::CharacterVector y);
RcppExport SEXP FIACH_concat2(SEXP xSEXP, SEXP marginSEXP, SEXP ySEXP) {
  BEGIN_RCPP
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type x(xSEXP);
  Rcpp::traits::input_parameter< int >::type margin(marginSEXP);
  Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type y(ySEXP);
  concat2(x, margin, y);
  return R_NilValue;
  END_RCPP
}
// tclObject
void tclObject(SEXP input, std::string update);
RcppExport SEXP FIACH_tclObject(SEXP inputSEXP, SEXP updateSEXP) {
  BEGIN_RCPP
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter< SEXP >::type input(inputSEXP);
  Rcpp::traits::input_parameter< std::string >::type update(updateSEXP);
  tclObject(input, update);
  return R_NilValue;
  END_RCPP
}
// hextest
void hextest(Rcpp::NumericVector input, Rcpp::CharacterVector palette, double currentmax, double currentmin, Rcpp::CharacterVector out);
RcppExport SEXP FIACH_hextest(SEXP inputSEXP, SEXP paletteSEXP, SEXP currentmaxSEXP, SEXP currentminSEXP, SEXP outSEXP) {
  BEGIN_RCPP
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type input(inputSEXP);
  Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type palette(paletteSEXP);
  Rcpp::traits::input_parameter< double >::type currentmax(currentmaxSEXP);
  Rcpp::traits::input_parameter< double >::type currentmin(currentminSEXP);
  Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type out(outSEXP);
  hextest(input, palette, currentmax, currentmin, out);
  return R_NilValue;
  END_RCPP
}
// applyAffine
Rcpp::NumericVector applyAffine(Rcpp::NumericVector yr, arma::mat aff);
RcppExport SEXP FIACH_applyAffine(SEXP yrSEXP, SEXP affSEXP) {
  BEGIN_RCPP
  Rcpp::RObject __result;
  Rcpp::RNGScope __rngScope;
  Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yr(yrSEXP);
  Rcpp::traits::input_parameter< arma::mat >::type aff(affSEXP);
  __result = Rcpp::wrap(applyAffine(yr, aff));
  return __result;
  END_RCPP
}
