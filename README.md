# ot-prototype

## Overview

This serves as a prototype template of a project that links to and builds an application dependent on the OpenThread library. The sample application is located in the dummy directory and includes a `main.c` and `cli_uart.cpp` file. Together, these two files create the OpenThread cli application. As currently configured, this builds the simulation cli which can be run on x86. 

The `run_test_build` script invokes the commands needed to trigger the cmake build system. After this completes, the `out` executable found in the `build` directory can be run. 

## Building

```
git submodule update --init
./run_test_build
``` 

