#ifndef _divModelR_UKFUTILS
#define _divModelR_UKFUTILS

#include <RcppArmadillo.h>
using namespace std;

arma::mat unscentedMean(const arma::mat xSigma, const arma::vec unscWts);

arma::mat unscentedCov(const arma::mat xSigma, const arma::vec unscWtsMean, const arma::vec unscWtsCov);

arma::mat unscentedCrossCov(const arma::mat xSigma, const arma::mat ySigma, const arma::vec unscWtsMean, const arma::vec unscWtsCov);

arma::mat generateSigmaPoints(const arma::mat, double gam, const arma::mat);

arma::mat generateSigmaWeights(const int L, const double alpha, const double beta);

#endif