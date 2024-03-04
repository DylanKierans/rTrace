// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// init_Archive
RcppExport SEXP init_Archive(Rcpp::String archivePath, Rcpp::String archiveName);
RcppExport SEXP _rTrace_init_Archive(SEXP archivePathSEXP, SEXP archiveNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type archivePath(archivePathSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type archiveName(archiveNameSEXP);
    rcpp_result_gen = Rcpp::wrap(init_Archive(archivePath, archiveName));
    return rcpp_result_gen;
END_RCPP
}
// finalize_Archive
RcppExport SEXP finalize_Archive();
RcppExport SEXP _rTrace_finalize_Archive() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(finalize_Archive());
    return rcpp_result_gen;
END_RCPP
}
// init_EvtWriter
RcppExport SEXP init_EvtWriter();
RcppExport SEXP _rTrace_init_EvtWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(init_EvtWriter());
    return rcpp_result_gen;
END_RCPP
}
// finalize_EvtWriter
RcppExport SEXP finalize_EvtWriter();
RcppExport SEXP _rTrace_finalize_EvtWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(finalize_EvtWriter());
    return rcpp_result_gen;
END_RCPP
}
// evtWriter_MeasurementOnOff
RcppExport SEXP evtWriter_MeasurementOnOff(bool measurementMode);
RcppExport SEXP _rTrace_evtWriter_MeasurementOnOff(SEXP measurementModeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type measurementMode(measurementModeSEXP);
    rcpp_result_gen = Rcpp::wrap(evtWriter_MeasurementOnOff(measurementMode));
    return rcpp_result_gen;
END_RCPP
}
// init_GlobalDefWriter
RcppExport SEXP init_GlobalDefWriter();
RcppExport SEXP _rTrace_init_GlobalDefWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(init_GlobalDefWriter());
    return rcpp_result_gen;
END_RCPP
}
// finalize_GlobalDefWriter
RcppExport SEXP finalize_GlobalDefWriter();
RcppExport SEXP _rTrace_finalize_GlobalDefWriter() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(finalize_GlobalDefWriter());
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteString
RcppExport uint64_t globalDefWriter_WriteString(Rcpp::String stringRefValue);
RcppExport SEXP _rTrace_globalDefWriter_WriteString(SEXP stringRefValueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type stringRefValue(stringRefValueSEXP);
    rcpp_result_gen = Rcpp::wrap(globalDefWriter_WriteString(stringRefValue));
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteRegion
RcppExport uint64_t globalDefWriter_WriteRegion(int stringRef_RegionName);
RcppExport SEXP _rTrace_globalDefWriter_WriteRegion(SEXP stringRef_RegionNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type stringRef_RegionName(stringRef_RegionNameSEXP);
    rcpp_result_gen = Rcpp::wrap(globalDefWriter_WriteRegion(stringRef_RegionName));
    return rcpp_result_gen;
END_RCPP
}
// globalDefWriter_WriteSystemTreeNode
RcppExport SEXP globalDefWriter_WriteSystemTreeNode(int stringRef_name, int stringRef_class);
RcppExport SEXP _rTrace_globalDefWriter_WriteSystemTreeNode(SEXP stringRef_nameSEXP, SEXP stringRef_classSEXP) {
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
RcppExport SEXP _rTrace_globalDefWriter_WriteLocation(SEXP stringRef_nameSEXP) {
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
RcppExport SEXP _rTrace_evtWriter_Write(SEXP regionRefSEXP, SEXP event_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type regionRef(regionRefSEXP);
    Rcpp::traits::input_parameter< bool >::type event_type(event_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(evtWriter_Write(regionRef, event_type));
    return rcpp_result_gen;
END_RCPP
}
// set_id
RcppExport SEXP set_id(const int idnew);
RcppExport SEXP _rTrace_set_id(SEXP idnewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type idnew(idnewSEXP);
    rcpp_result_gen = Rcpp::wrap(set_id(idnew));
    return rcpp_result_gen;
END_RCPP
}
// get_id
RcppExport int get_id();
RcppExport SEXP _rTrace_get_id() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_id());
    return rcpp_result_gen;
END_RCPP
}
// get_pid
RcppExport int get_pid();
RcppExport SEXP _rTrace_get_pid() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_pid());
    return rcpp_result_gen;
END_RCPP
}
// get_tid
RcppExport int get_tid();
RcppExport SEXP _rTrace_get_tid() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_tid());
    return rcpp_result_gen;
END_RCPP
}
// get_ppid
RcppExport int get_ppid();
RcppExport SEXP _rTrace_get_ppid() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_ppid());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rTrace_init_Archive", (DL_FUNC) &_rTrace_init_Archive, 2},
    {"_rTrace_finalize_Archive", (DL_FUNC) &_rTrace_finalize_Archive, 0},
    {"_rTrace_init_EvtWriter", (DL_FUNC) &_rTrace_init_EvtWriter, 0},
    {"_rTrace_finalize_EvtWriter", (DL_FUNC) &_rTrace_finalize_EvtWriter, 0},
    {"_rTrace_evtWriter_MeasurementOnOff", (DL_FUNC) &_rTrace_evtWriter_MeasurementOnOff, 1},
    {"_rTrace_init_GlobalDefWriter", (DL_FUNC) &_rTrace_init_GlobalDefWriter, 0},
    {"_rTrace_finalize_GlobalDefWriter", (DL_FUNC) &_rTrace_finalize_GlobalDefWriter, 0},
    {"_rTrace_globalDefWriter_WriteString", (DL_FUNC) &_rTrace_globalDefWriter_WriteString, 1},
    {"_rTrace_globalDefWriter_WriteRegion", (DL_FUNC) &_rTrace_globalDefWriter_WriteRegion, 1},
    {"_rTrace_globalDefWriter_WriteSystemTreeNode", (DL_FUNC) &_rTrace_globalDefWriter_WriteSystemTreeNode, 2},
    {"_rTrace_globalDefWriter_WriteLocation", (DL_FUNC) &_rTrace_globalDefWriter_WriteLocation, 1},
    {"_rTrace_evtWriter_Write", (DL_FUNC) &_rTrace_evtWriter_Write, 2},
    {"_rTrace_set_id", (DL_FUNC) &_rTrace_set_id, 1},
    {"_rTrace_get_id", (DL_FUNC) &_rTrace_get_id, 0},
    {"_rTrace_get_pid", (DL_FUNC) &_rTrace_get_pid, 0},
    {"_rTrace_get_tid", (DL_FUNC) &_rTrace_get_tid, 0},
    {"_rTrace_get_ppid", (DL_FUNC) &_rTrace_get_ppid, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_rTrace(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
