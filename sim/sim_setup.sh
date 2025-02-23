#!/usr/bin/env bash

set -e

cd $(dirname "$0")

VERILATOR="${VERILATOR:-verilator}"

# Clean
make clean
# Verilate the model
make