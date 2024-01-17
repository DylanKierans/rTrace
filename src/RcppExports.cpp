// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// helloWorld
RcppExport SEXP helloWorld();
RcppExport SEXP _rTest_helloWorld() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(helloWorld());
    return rcpp_result_gen;
END_RCPP
}
// init_Archive
RcppExport SEXP init_Archive();
RcppExport SEXP _rTest_init_Archive() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(init_Archive());
    return rcpp_result_gen;
END_RCPP
}
// finalize_Archive
RcppExport SEXP finalize_Archive();
RcppExport SEXP _rTest_finalize_Archive() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(finalize_Archive());
    return rcpp_result_gen;
END_RCPP
}
// init_EvtWriter
RcppExport SEXP init_EvtWriter();
RcppExport SEXP _rTest_init_EvtWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(init_EvtWriter());
    return rcpp_result_gen;
END_RCPP
}
// finalize_EvtWriter
RcppExport SEXP finalize_EvtWriter();
RcppExport SEXP _rTest_finalize_EvtWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(finalize_EvtWriter());
    return rcpp_result_gen;
END_RCPP
}
// init_GlobalDefWriter
RcppExport SEXP init_GlobalDefWriter();
RcppExport SEXP _rTest_init_GlobalDefWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(init_GlobalDefWriter());
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteString
RcppExport SEXP globalDefWriter_WriteString(int stringRef, Rcpp::String stringRefValue);
RcppExport SEXP _rTest_globalDefWriter_WriteString(SEXP stringRefSEXP, SEXP stringRefValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type stringRef(stringRefSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type stringRefValue(stringRefValueSEXP);
    rcpp_result_gen = Rcpp::wrap(globalDefWriter_WriteString(stringRef, stringRefValue));
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteRegion
RcppExport SEXP globalDefWriter_WriteRegion(int regionRef, int stringRef_name);
RcppExport SEXP _rTest_globalDefWriter_WriteRegion(SEXP regionRefSEXP, SEXP stringRef_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type regionRef(regionRefSEXP);
    Rcpp::traits::input_parameter< int >::type stringRef_name(stringRef_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(globalDefWriter_WriteRegion(regionRef, stringRef_name));
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteSystemTreeNode
RcppExport SEXP globalDefWriter_WriteSystemTreeNode(int stringRef_name, int stringRef_class);
RcppExport SEXP _rTest_globalDefWriter_WriteSystemTreeNode(SEXP stringRef_nameSEXP, SEXP stringRef_classSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type stringRef_name(stringRef_nameSEXP);
    Rcpp::traits::input_parameter< int >::type stringRef_class(stringRef_classSEXP);
    rcpp_result_gen = Rcpp::wrap(globalDefWriter_WriteSystemTreeNode(stringRef_name, stringRef_class));
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteLocation
RcppExport SEXP globalDefWriter_WriteLocation(int stringRef_name);
RcppExport SEXP _rTest_globalDefWriter_WriteLocation(SEXP stringRef_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type stringRef_name(stringRef_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(globalDefWriter_WriteLocation(stringRef_name));
    return rcpp_result_gen;
END_RCPP
}
// evtWriter_Write
RcppExport SEXP evtWriter_Write(int regionRef, bool event_type);
RcppExport SEXP _rTest_evtWriter_Write(SEXP regionRefSEXP, SEXP event_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type regionRef(regionRefSEXP);
    Rcpp::traits::input_parameter< bool >::type event_type(event_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(evtWriter_Write(regionRef, event_type));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rTest_helloWorld", (DL_FUNC) &_rTest_helloWorld, 0},
    {"_rTest_init_Archive", (DL_FUNC) &_rTest_init_Archive, 0},
    {"_rTest_finalize_Archive", (DL_FUNC) &_rTest_finalize_Archive, 0},
    {"_rTest_init_EvtWriter", (DL_FUNC) &_rTest_init_EvtWriter, 0},
    {"_rTest_finalize_EvtWriter", (DL_FUNC) &_rTest_finalize_EvtWriter, 0},
    {"_rTest_init_GlobalDefWriter", (DL_FUNC) &_rTest_init_GlobalDefWriter, 0},
    {"_rTest_globalDefWriter_WriteString", (DL_FUNC) &_rTest_globalDefWriter_WriteString, 2},
    {"_rTest_globalDefWriter_WriteRegion", (DL_FUNC) &_rTest_globalDefWriter_WriteRegion, 2},
    {"_rTest_globalDefWriter_WriteSystemTreeNode", (DL_FUNC) &_rTest_globalDefWriter_WriteSystemTreeNode, 2},
    {"_rTest_globalDefWriter_WriteLocation", (DL_FUNC) &_rTest_globalDefWriter_WriteLocation, 1},
    {"_rTest_evtWriter_Write", (DL_FUNC) &_rTest_evtWriter_Write, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_rTest(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}