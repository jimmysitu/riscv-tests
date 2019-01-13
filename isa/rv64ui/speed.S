# See LICENSE for license details.

#*****************************************************************************
# simple.S
#-----------------------------------------------------------------------------
#
# This is the most basic self checking test. If your simulator does not
# pass thiss then there is little chance that it will pass any of the
# more complicated self checking tests.
#

#include "riscv_test.h"
#include "test_macros.h"

RVTEST_RV64U
RVTEST_CODE_BEGIN

# Speed test with nop instruction, to get max IPC
    li  t1, 100;
    li  t2, 0;

while:
    TEST_INSERT_NOPS_8;
    TEST_INSERT_NOPS_8;
    TEST_INSERT_NOPS_8;
    TEST_INSERT_NOPS_8;
    TEST_INSERT_NOPS_8;
    TEST_INSERT_NOPS_8;
    TEST_INSERT_NOPS_8;
    addi t2, t2, 1;
    bne  t1, t2, while;
    

RVTEST_PASS

RVTEST_CODE_END

  .data
RVTEST_DATA_BEGIN

  TEST_DATA

RVTEST_DATA_END
