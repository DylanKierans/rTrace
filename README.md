  <!-- badges: start -->
[![R-CMD-check](https://github.com/DylanKierans/rTrace/actions/workflows/R-CMD-check.yaml/badge.svg)](https://github.com/DylanKierans/rTrace/actions/workflows/R-CMD-check.yaml)
  <!-- badges: end -->

# rTrace - LibOTF2 Wrapper for R

This is a development package for creating a high-level otf2 wrapper for tracing R scripts.

Wrapper built using [`Rcpp`](https://cran.r-project.org/web/packages/Rcpp/index.html).

Using `ZeroMQ` socket to communicate with process responsible for otf2 logging.


## Installation

Install [`libotf2`](https://www.vi-hps.org/projects/score-p/), and [`zeromq`](https://github.com/zeromq) dependency. Then install `rTrace` from github with:

```R
install.packages("devtools") # if not yet installed
devtools::install_github("DylanKierans/rTrace")
```

## Usage

```R
# <import packages>
# <define user functions>

instrumentation_init()
instrument_all_functions()

# <...enter relevant area...>
instrumentation_enable()
# <...do work...>
instrumentation_disable()
# <...exit relevant area...>

instrumentation_finalize()
```

## Authors 

Dylan Kierans

## License 

Licensed under GPL-3.0

## TODO

* Clean up naming convention for:
    * Functions
    * Package variables in `pkg.env`

* Add get/set functions for `pkg.env` global variables
    * `MAX_FUNCTION_DEPTH`
    * `PRINT_SKIPS`, `PRINT_FUNC_INDEXES`, `PRINT_INSTRUMENTS`
    * `FLAG_INSTRUMENT_ALL`, `FLAG_INSTRUMENT_USER_FUNCTIONS`

* Compile functions with `cmpfun` (disabled to speed up testing workflow)

* Allow users to specify functions to instrument or add exceptions

