// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Mahalanobis
arma::vec Mahalanobis(arma::mat x, arma::rowvec center, arma::mat cov);
RcppExport SEXP _MulticastNetwork_Mahalanobis(SEXP xSEXP, SEXP centerSEXP, SEXP covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type center(centerSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    rcpp_result_gen = Rcpp::wrap(Mahalanobis(x, center, cov));
    return rcpp_result_gen;
END_RCPP
}
// ei
arma::vec ei(arma::mat M);
RcppExport SEXP _MulticastNetwork_ei(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(ei(M));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_arma
arma::vec dmvnorm_arma(arma::mat x, arma::rowvec mean, arma::mat sigma);
RcppExport SEXP _MulticastNetwork_dmvnorm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_arma(x, mean, sigma));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_arma
arma::mat rmvnorm_arma(int n, const arma::vec& mu, const arma::mat& Sigma);
RcppExport SEXP _MulticastNetwork_rmvnorm_arma(SEXP nSEXP, SEXP muSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_arma(n, mu, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// transpose
arma::mat transpose(arma::mat x);
RcppExport SEXP _MulticastNetwork_transpose(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(transpose(x));
    return rcpp_result_gen;
END_RCPP
}
// tabulateC
IntegerVector tabulateC(const IntegerVector& x, const signed max);
RcppExport SEXP _MulticastNetwork_tabulateC(SEXP xSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const signed >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(tabulateC(x, max));
    return rcpp_result_gen;
END_RCPP
}
// Timepartsum
double Timepartsum(NumericMatrix mumat, double sigma_tau, IntegerVector senders, NumericVector timestamps);
RcppExport SEXP _MulticastNetwork_Timepartsum(SEXP mumatSEXP, SEXP sigma_tauSEXP, SEXP sendersSEXP, SEXP timestampsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mumat(mumatSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_tau(sigma_tauSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type senders(sendersSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type timestamps(timestampsSEXP);
    rcpp_result_gen = Rcpp::wrap(Timepartsum(mumat, sigma_tau, senders, timestamps));
    return rcpp_result_gen;
END_RCPP
}
// Timepartsum2
double Timepartsum2(NumericMatrix mumat, IntegerVector senders, NumericVector timestamps);
RcppExport SEXP _MulticastNetwork_Timepartsum2(SEXP mumatSEXP, SEXP sendersSEXP, SEXP timestampsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mumat(mumatSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type senders(sendersSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type timestamps(timestampsSEXP);
    rcpp_result_gen = Rcpp::wrap(Timepartsum2(mumat, senders, timestamps));
    return rcpp_result_gen;
END_RCPP
}
// Timepartindiv
NumericVector Timepartindiv(NumericVector mu, double sigma_tau, double timestamp);
RcppExport SEXP _MulticastNetwork_Timepartindiv(SEXP muSEXP, SEXP sigma_tauSEXP, SEXP timestampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma_tau(sigma_tauSEXP);
    Rcpp::traits::input_parameter< double >::type timestamp(timestampSEXP);
    rcpp_result_gen = Rcpp::wrap(Timepartindiv(mu, sigma_tau, timestamp));
    return rcpp_result_gen;
END_RCPP
}
// Timepartindiv2
NumericVector Timepartindiv2(NumericVector mu, double timestamp);
RcppExport SEXP _MulticastNetwork_Timepartindiv2(SEXP muSEXP, SEXP timestampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type timestamp(timestampSEXP);
    rcpp_result_gen = Rcpp::wrap(Timepartindiv2(mu, timestamp));
    return rcpp_result_gen;
END_RCPP
}
// multinom_vec
int multinom_vec(NumericVector x);
RcppExport SEXP _MulticastNetwork_multinom_vec(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(multinom_vec(x));
    return rcpp_result_gen;
END_RCPP
}
// normalizer
double normalizer(arma::vec lambda_da);
RcppExport SEXP _MulticastNetwork_normalizer(SEXP lambda_daSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type lambda_da(lambda_daSEXP);
    rcpp_result_gen = Rcpp::wrap(normalizer(lambda_da));
    return rcpp_result_gen;
END_RCPP
}
// Edgepartsum
double Edgepartsum(List lambda, List u);
RcppExport SEXP _MulticastNetwork_Edgepartsum(SEXP lambdaSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(Edgepartsum(lambda, u));
    return rcpp_result_gen;
END_RCPP
}
// mu_cpp
arma::mat mu_cpp(arma::cube Y, arma::rowvec eta);
RcppExport SEXP _MulticastNetwork_mu_cpp(SEXP YSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(mu_cpp(Y, eta));
    return rcpp_result_gen;
END_RCPP
}
// mu_cpp_d
NumericVector mu_cpp_d(NumericMatrix Y, NumericVector eta);
RcppExport SEXP _MulticastNetwork_mu_cpp_d(SEXP YSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(mu_cpp_d(Y, eta));
    return rcpp_result_gen;
END_RCPP
}
// lambda_cpp
arma::mat lambda_cpp(arma::cube X_d, arma::rowvec beta);
RcppExport SEXP _MulticastNetwork_lambda_cpp(SEXP X_dSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type X_d(X_dSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(lambda_cpp(X_d, beta));
    return rcpp_result_gen;
END_RCPP
}
// sample_int
Rcpp::IntegerVector sample_int(int n, int min, int max);
RcppExport SEXP _MulticastNetwork_sample_int(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type min(minSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int(n, min, max));
    return rcpp_result_gen;
END_RCPP
}
// u_cpp
List u_cpp(List lambda, List u);
RcppExport SEXP _MulticastNetwork_u_cpp(SEXP lambdaSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(u_cpp(lambda, u));
    return rcpp_result_gen;
END_RCPP
}
// u_cpp_d
IntegerMatrix u_cpp_d(NumericMatrix lambda_d, IntegerMatrix u);
RcppExport SEXP _MulticastNetwork_u_cpp_d(SEXP lambda_dSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type lambda_d(lambda_dSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(u_cpp_d(lambda_d, u));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MulticastNetwork_Mahalanobis", (DL_FUNC) &_MulticastNetwork_Mahalanobis, 3},
    {"_MulticastNetwork_ei", (DL_FUNC) &_MulticastNetwork_ei, 1},
    {"_MulticastNetwork_dmvnorm_arma", (DL_FUNC) &_MulticastNetwork_dmvnorm_arma, 3},
    {"_MulticastNetwork_rmvnorm_arma", (DL_FUNC) &_MulticastNetwork_rmvnorm_arma, 3},
    {"_MulticastNetwork_transpose", (DL_FUNC) &_MulticastNetwork_transpose, 1},
    {"_MulticastNetwork_tabulateC", (DL_FUNC) &_MulticastNetwork_tabulateC, 2},
    {"_MulticastNetwork_Timepartsum", (DL_FUNC) &_MulticastNetwork_Timepartsum, 4},
    {"_MulticastNetwork_Timepartsum2", (DL_FUNC) &_MulticastNetwork_Timepartsum2, 3},
    {"_MulticastNetwork_Timepartindiv", (DL_FUNC) &_MulticastNetwork_Timepartindiv, 3},
    {"_MulticastNetwork_Timepartindiv2", (DL_FUNC) &_MulticastNetwork_Timepartindiv2, 2},
    {"_MulticastNetwork_multinom_vec", (DL_FUNC) &_MulticastNetwork_multinom_vec, 1},
    {"_MulticastNetwork_normalizer", (DL_FUNC) &_MulticastNetwork_normalizer, 1},
    {"_MulticastNetwork_Edgepartsum", (DL_FUNC) &_MulticastNetwork_Edgepartsum, 2},
    {"_MulticastNetwork_mu_cpp", (DL_FUNC) &_MulticastNetwork_mu_cpp, 2},
    {"_MulticastNetwork_mu_cpp_d", (DL_FUNC) &_MulticastNetwork_mu_cpp_d, 2},
    {"_MulticastNetwork_lambda_cpp", (DL_FUNC) &_MulticastNetwork_lambda_cpp, 2},
    {"_MulticastNetwork_sample_int", (DL_FUNC) &_MulticastNetwork_sample_int, 3},
    {"_MulticastNetwork_u_cpp", (DL_FUNC) &_MulticastNetwork_u_cpp, 2},
    {"_MulticastNetwork_u_cpp_d", (DL_FUNC) &_MulticastNetwork_u_cpp_d, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_MulticastNetwork(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
