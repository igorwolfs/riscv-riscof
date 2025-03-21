#include <verilated.h>
#include "verilated_vcd_c.h"
#include "Vtop_tb.h"

int main(int argc, char **argv)
{
    // Construct context object, design object, and trace object
    VerilatedContext *m_contextp = new VerilatedContext; // Context
    m_contextp->commandArgs(argc, argv);  // Add this line to pass command line args

    Vtop_tb *m_duvp = new Vtop_tb;                 // Design
    // Trace configuration
    // Write data to the waveform file
    while (!m_contextp->gotFinish())
    {
        // Refresh circuit state
        m_duvp->eval();
        // Increase simulation time
        m_contextp->timeInc(1);
    }
    // Free memory
    delete m_duvp;
    delete m_contextp;  // Add this line
    return 0;
}