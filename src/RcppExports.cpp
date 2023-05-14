// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// geodesic
std::vector<double> geodesic(std::vector<double> lon1, std::vector<double> lat1, std::vector<double> azi1, std::vector<double> s12, double a, double f);
RcppExport SEXP _geosphere_geodesic(SEXP lon1SEXP, SEXP lat1SEXP, SEXP azi1SEXP, SEXP s12SEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type azi1(azi1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type s12(s12SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(geodesic(lon1, lat1, azi1, s12, a, f));
    return rcpp_result_gen;
END_RCPP
}
// inversegeodesic
std::vector<double> inversegeodesic(std::vector<double> lon1, std::vector<double> lat1, std::vector<double> lon2, std::vector<double> lat2, double a, double f);
RcppExport SEXP _geosphere_inversegeodesic(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(inversegeodesic(lon1, lat1, lon2, lat2, a, f));
    return rcpp_result_gen;
END_RCPP
}
// polygonarea
std::vector<double> polygonarea(std::vector<double> lon, std::vector<double> lat, double a, double f);
RcppExport SEXP _geosphere_polygonarea(SEXP lonSEXP, SEXP latSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type lon(lonSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type lat(latSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(polygonarea(lon, lat, a, f));
    return rcpp_result_gen;
END_RCPP
}
// geodesic_nodes
std::vector<std::vector<double>> geodesic_nodes(double lon1, double lat1, double lon2, double lat2, size_t n, double distance, bool arc, double a, double f);
RcppExport SEXP _geosphere_geodesic_nodes(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP nSEXP, SEXP distanceSEXP, SEXP arcSEXP, SEXP aSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< bool >::type arc(arcSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(geodesic_nodes(lon1, lat1, lon2, lat2, n, distance, arc, a, f));
    return rcpp_result_gen;
END_RCPP
}
// osgb
std::vector<std::string> osgb(std::vector<double> x, std::vector<double> y, std::string p, bool geo);
RcppExport SEXP _geosphere_osgb(SEXP xSEXP, SEXP ySEXP, SEXP pSEXP, SEXP geoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type geo(geoSEXP);
    rcpp_result_gen = Rcpp::wrap(osgb(x, y, p, geo));
    return rcpp_result_gen;
END_RCPP
}
// osgb_rev
std::vector<double> osgb_rev(std::vector<std::string> g, int prec, bool centerp);
RcppExport SEXP _geosphere_osgb_rev(SEXP gSEXP, SEXP precSEXP, SEXP centerpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type g(gSEXP);
    Rcpp::traits::input_parameter< int >::type prec(precSEXP);
    Rcpp::traits::input_parameter< bool >::type centerp(centerpSEXP);
    rcpp_result_gen = Rcpp::wrap(osgb_rev(g, prec, centerp));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geosphere_geodesic", (DL_FUNC) &_geosphere_geodesic, 6},
    {"_geosphere_inversegeodesic", (DL_FUNC) &_geosphere_inversegeodesic, 6},
    {"_geosphere_polygonarea", (DL_FUNC) &_geosphere_polygonarea, 4},
    {"_geosphere_geodesic_nodes", (DL_FUNC) &_geosphere_geodesic_nodes, 9},
    {"_geosphere_osgb", (DL_FUNC) &_geosphere_osgb, 4},
    {"_geosphere_osgb_rev", (DL_FUNC) &_geosphere_osgb_rev, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_geosphere(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
