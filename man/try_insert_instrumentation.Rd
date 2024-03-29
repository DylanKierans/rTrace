% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/r_instrument_ll.R
\name{try_insert_instrumentation}
\alias{try_insert_instrumentation}
\title{try_insert_instrumentation}
\usage{
try_insert_instrumentation(
  func_info,
  func_ptrs,
  env_is_locked,
  function_exception_list,
  function_methods_exception_list,
  flag_user_function = F,
  flag_debug = F,
  flag_slave_proc = F
)
}
\arguments{
\item{func_info}{Dataframe (struct) containing func_index info, func_name and packagE_name}

\item{func_ptrs}{Function[] - List of function objects}

\item{env_is_locked}{Boolean - TRUE if function name-/package- space is locked}

\item{function_exception_list}{Object[] - List of function exceptions to skip}

\item{function_methods_exception_list}{Object[] - List of function method exceptions to skip}

\item{flag_user_function}{Boolean - Enable if user defined function (in .GlobalEnv)}

\item{flag_debug}{Boolean - Enable debug output}

\item{flag_slave_proc}{Boolean - Enable if running on slave proc}
}
\description{
Checks function exceptions and calls insert_instrumentation() if success
}
