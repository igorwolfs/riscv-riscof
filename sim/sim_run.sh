#!/usr/bin/env bash

set -e

cd $(dirname "$0")

# prepare simulation output file
touch DUT-riscv_core.signature
chmod 777 DUT-riscv_core.signature

