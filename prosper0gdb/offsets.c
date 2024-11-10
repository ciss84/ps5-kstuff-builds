#include "r0gdb.h"
#include "offsets.h"

struct offset_table offsets;
extern uint64_t kdata_base;

#define OFFSET(x) offsets.x = kdata_base + x;
#define DEF(x, y) enum { x = (y) + 0 * sizeof(offsets.x) };

#define START_FW(fw) void set_offsets_ ## fw(void) {
#define END_FW() }

START_FW(300)
DEF(allproc, 0x276dc58)
DEF(idt, 0x642dc80)
DEF(gdt_array, 0x642ee20)
DEF(tss_array, 0x6430820)
DEF(pcpu_array, 0x6432280)
DEF(doreti_iret, -0x9aefbc)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x96f79a)
DEF(rdmsr_start, -0x9b046a)
DEF(wrmsr_ret, -0x9b183c)
DEF(dr2gpr_start, -0x9b6513)
DEF(gpr2dr_1_start, -0x9b63fa)
DEF(gpr2dr_2_start, -0x9b6307)
DEF(mov_cr3_rax, -0x39099e)
DEF(mov_rdi_cr3, -0x390a0e)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9b6700)
DEF(mprotect_fix_start, -0x8ee651)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2c92bd)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1dd21e)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6b549f)
DEF(sigaction_fix_end, -0x6b5449)
DEF(sysents, 0x16f720)
DEF(sysents_ps4, 0x167170)
DEF(sysentvec, 0xca0cd8)
DEF(sysentvec_ps4, 0xca0e50)
DEF(sceSblServiceMailbox, -0x675df0)
DEF(sceSblAuthMgrSmIsLoadable2, -0x88a540)
DEF(mdbg_call_fix, -0x626d49)
DEF(syscall_before, -0x7e91bf)
DEF(syscall_after, -0x7e919c)
DEF(malloc, -0xaa2a0)
DEF(M_something, 0x12d3d70)
DEF(loadSelfSegment_epilogue, -0x889e0d)
DEF(loadSelfSegment_watchpoint, -0x2c88a8)
DEF(loadSelfSegment_watchpoint_lr, -0x88a067)
DEF(decryptSelfBlock_watchpoint_lr, -0x889cca)
DEF(decryptSelfBlock_epilogue, -0x889c03)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x889595)
DEF(decryptMultipleSelfBlocks_epilogue, -0x889112)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x88a1bc)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x889e81)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x889954)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8891cc)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x88a5be)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x92d9b0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x92df7b)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x92df05)
DEF(sceSblPfsSetKeys, -0x92dc60)
DEF(sceSblServiceCryptAsync, -0x8d1e30)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8d1df2)
DEF(copyin, -0x970050)
DEF(copyout, -0x970100)
DEF(crypt_message_resolve, -0x475790)
DEF(justreturn, -0x9af100)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xd4fe88)
DEF(pop_all_iret, -0x9af01b)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x94f570)
DEF(kernel_pmap_store, 0x31be218)
DEF(crypt_singleton_array, 0x2d99830)
DEF(security_flags, 0x6466474)
DEF(targetid, 0x646647d)
DEF(qa_flags, 0x6466498)
DEF(utoken, 0x6466500)
#include "offset_list.txt"
END_FW()

START_FW(310)
DEF(allproc, 0x276dc58)
DEF(idt, 0x642dc80)
DEF(gdt_array, 0x642ee20)
DEF(tss_array, 0x6430820)
DEF(pcpu_array, 0x6432280)
DEF(doreti_iret, -0x9aefbc)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x96f79a)
DEF(rdmsr_start, -0x9b046a)
DEF(wrmsr_ret, -0x9b183c)
DEF(dr2gpr_start, -0x9b6513)
DEF(gpr2dr_1_start, -0x9b63fa)
DEF(gpr2dr_2_start, -0x9b6307)
DEF(mov_cr3_rax, -0x39095e)
DEF(mov_rdi_cr3, -0x3909ce)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9b6700)
DEF(mprotect_fix_start, -0x8ee651)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2c927d)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1dd1de)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6b545f)
DEF(sigaction_fix_end, -0x6b5409)
DEF(sysents, 0x16f720)
DEF(sysents_ps4, 0x167170)
DEF(sysentvec, 0xca0cd8)
DEF(sysentvec_ps4, 0xca0e50)
DEF(sceSblServiceMailbox, -0x675db0)
DEF(sceSblAuthMgrSmIsLoadable2, -0x88a540)
DEF(mdbg_call_fix, -0x626d09)
DEF(syscall_before, -0x7e917f)
DEF(syscall_after, -0x7e915c)
DEF(malloc, -0xaa260)
DEF(M_something, 0x12d3d70)
DEF(loadSelfSegment_epilogue, -0x889dcd)
DEF(loadSelfSegment_watchpoint, -0x2c8868)
DEF(loadSelfSegment_watchpoint_lr, -0x88a027)
DEF(decryptSelfBlock_watchpoint_lr, -0x889c8a)
DEF(decryptSelfBlock_epilogue, -0x889bc3)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x889555)
DEF(decryptMultipleSelfBlocks_epilogue, -0x8890d2)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x88a1bc)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x889e41)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x889914)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x88918c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x88a5be)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x92d9b0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x92df7b)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x92df05)
DEF(sceSblPfsSetKeys, -0x92dc60)
DEF(sceSblServiceCryptAsync, -0x8d1e30)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8d1df2)
DEF(copyin, -0x970050)
DEF(copyout, -0x970100)
DEF(crypt_message_resolve, -0x475750)
DEF(justreturn, -0x9af100)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xd4fe88)
DEF(pop_all_iret, -0x9af01b)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x94f6b8)
DEF(kernel_pmap_store, 0x31be218)
DEF(crypt_singleton_array, 0x2d99830)
DEF(security_flags, 0x6466474)
DEF(targetid, 0x646647d)
DEF(qa_flags, 0x6466490)
DEF(utoken, 0x6466500)
#include "offset_list.txt"
END_FW()

START_FW(320)
DEF(allproc, 0x276dc58)
DEF(idt, 0x642dc80)
DEF(gdt_array, 0x642ee20)
DEF(tss_array, 0x6430820)
DEF(pcpu_array, 0x6432280)
DEF(doreti_iret, -0x9aec7c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x96f45a)
DEF(rdmsr_start, -0x9b012a)
DEF(wrmsr_ret, -0x9b14fc)
DEF(dr2gpr_start, -0x9b61d3)
DEF(gpr2dr_1_start, -0x9b60ba)
DEF(gpr2dr_2_start, -0x9b5fc7)
DEF(mov_cr3_rax, -0x39060e)
DEF(mov_rdi_cr3, -0x39067e)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9b63c0)
DEF(mprotect_fix_start, -0x8ee311)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2c8f2d)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1dcd1e)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6b510f)
DEF(sigaction_fix_end, -0x6b50b9)
DEF(sysents, 0x16f720)
DEF(sysents_ps4, 0x167170)
DEF(sysentvec, 0xca0cd8)
DEF(sysentvec_ps4, 0xca0e50)
DEF(sceSblServiceMailbox, -0x675a60)
DEF(sceSblAuthMgrSmIsLoadable2, -0x88a200)
DEF(mdbg_call_fix, -0x6269b9)
DEF(syscall_before, -0x7e8e2f)
DEF(syscall_after, -0x7e8e0c)
DEF(malloc, -0xa9da0)
DEF(M_something, 0x12d3d70)
DEF(loadSelfSegment_epilogue, -0x889a7d)
DEF(loadSelfSegment_watchpoint, -0x2c8518)
DEF(loadSelfSegment_watchpoint_lr, -0x889cd7)
DEF(decryptSelfBlock_watchpoint_lr, -0x88993a)
DEF(decryptSelfBlock_epilogue, -0x889873)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x889205)
DEF(decryptMultipleSelfBlocks_epilogue, -0x888d82)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x889e7c)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x889af1)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8895c4)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x888e3c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x88a27e)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x92d670)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x92dc3b)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x92dbc5)
DEF(sceSblPfsSetKeys, -0x92d920)
DEF(sceSblServiceCryptAsync, -0x8d1af0)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8d1ab2)
DEF(copyin, -0x96fd10)
DEF(copyout, -0x96fdc0)
DEF(crypt_message_resolve, -0x475400)
DEF(justreturn, -0x9aedc0)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xd4fe88)
DEF(pop_all_iret, -0x9aecdb)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x94e7d0)
DEF(kernel_pmap_store, 0x31be218)
DEF(crypt_singleton_array, 0x2d99830)
DEF(security_flags, 0x6466474)
DEF(targetid, 0x646647d)
DEF(qa_flags, 0x6466498)
DEF(utoken, 0x6466500)
#include "offset_list.txt"
END_FW()

START_FW(321)
DEF(allproc, 0x276dc58)
DEF(idt, 0x642dc80)
DEF(gdt_array, 0x642ee20)
DEF(tss_array, 0x6430820)
DEF(pcpu_array, 0x6432280)
DEF(doreti_iret, -0x9aec7c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x96f45a)
DEF(rdmsr_start, -0x9b012a)
DEF(wrmsr_ret, -0x9b14fc)
DEF(dr2gpr_start, -0x9b61d3)
DEF(gpr2dr_1_start, -0x9b60ba)
DEF(gpr2dr_2_start, -0x9b5fc7)
DEF(mov_cr3_rax, -0x39060e)
DEF(mov_rdi_cr3, -0x39067e)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9b63c0)
DEF(mprotect_fix_start, -0x8ee311)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2c8f2d)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1dcd1e)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6b510f)
DEF(sigaction_fix_end, -0x6b50b9)
DEF(sysents, 0x16f720)
DEF(sysents_ps4, 0x167170)
DEF(sysentvec, 0xca0cd8)
DEF(sysentvec_ps4, 0xca0e50)
DEF(sceSblServiceMailbox, -0x675a60)
DEF(sceSblAuthMgrSmIsLoadable2, -0x88a200)
DEF(mdbg_call_fix, -0x6269b9)
DEF(syscall_before, -0x7e8e2f)
DEF(syscall_after, -0x7e8e0c)
DEF(malloc, -0xa9da0)
DEF(M_something, 0x12d3d70)
DEF(loadSelfSegment_epilogue, -0x889a7d)
DEF(loadSelfSegment_watchpoint, -0x2c8518)
DEF(loadSelfSegment_watchpoint_lr, -0x889cd7)
DEF(decryptSelfBlock_watchpoint_lr, -0x88993a)
DEF(decryptSelfBlock_epilogue, -0x889873)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x889205)
DEF(decryptMultipleSelfBlocks_epilogue, -0x888d82)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x889e7c)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x889af1)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8895c4)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x888e3c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x88a27e)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x92d670)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x92dc3b)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x92dbc5)
DEF(sceSblPfsSetKeys, -0x92d920)
DEF(sceSblServiceCryptAsync, -0x8d1af0)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8d1ab2)
DEF(copyin, -0x96fd10)
DEF(copyout, -0x96fdc0)
DEF(crypt_message_resolve, -0x475400)
DEF(justreturn, -0x9aedc0)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xd4fe88)
DEF(pop_all_iret, -0x9aecdb)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x94e4d0)
DEF(kernel_pmap_store, 0x31be218)
DEF(crypt_singleton_array, 0x2d99830)
DEF(security_flags, 0x6466474)
DEF(targetid, 0x646647d)
DEF(qa_flags, 0x6466498)
DEF(utoken, 0x6466500)
#include "offset_list.txt"
END_FW()

START_FW(400)
DEF(allproc, 0x27edcb8)
DEF(idt, 0x64cdc80)
DEF(gdt_array, 0x64cee30)
DEF(tss_array, 0x64d0830)
DEF(pcpu_array, 0x64d2280)
DEF(doreti_iret, -0x9cf84c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x99002a)
DEF(rdmsr_start, -0x9d0cfa)
DEF(wrmsr_ret, -0x9d20cc)
DEF(dr2gpr_start, -0x9d6d93)
DEF(gpr2dr_1_start, -0x9d6c7a)
DEF(gpr2dr_2_start, -0x9d6b87)
DEF(mov_cr3_rax, -0x39707e)
DEF(mov_rdi_cr3, -0x3970ee)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9d6f80)
DEF(mprotect_fix_start, -0x90ac61)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2cd3fd)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1df3ae)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6c2989)
DEF(sigaction_fix_end, -0x6c2933)
DEF(sysents, 0x1709c0)
DEF(sysents_ps4, 0x168410)
DEF(sysentvec, 0xd11bb8)
DEF(sysentvec_ps4, 0xd11d30)
DEF(sceSblServiceMailbox, -0x6824c0)
DEF(sceSblAuthMgrSmIsLoadable2, -0x8a5c40)
DEF(mdbg_call_fix, -0x631eb9)
DEF(syscall_before, -0x802311)
DEF(syscall_after, -0x8022ee)
DEF(malloc, -0xa9be0)
DEF(M_something, 0x1346080)
DEF(loadSelfSegment_epilogue, -0x8a54cd)
DEF(loadSelfSegment_watchpoint, -0x2cc9f8)
DEF(loadSelfSegment_watchpoint_lr, -0x8a5727)
DEF(decryptSelfBlock_watchpoint_lr, -0x8a538a)
DEF(decryptSelfBlock_epilogue, -0x8a52c3)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x8a4c55)
DEF(decryptMultipleSelfBlocks_epilogue, -0x8a47d2)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x8a58bc)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x8a5541)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8a5014)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8a488c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x8a5cbe)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x94a7f0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x94ada4)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x94ad2e)
DEF(sceSblPfsSetKeys, -0x94aaa0)
DEF(sceSblServiceCryptAsync, -0x8ed940)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8ed902)
DEF(copyin, -0x9908e0)
DEF(copyout, -0x990990)
DEF(crypt_message_resolve, -0x479e40)
DEF(justreturn, -0x9cf990)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xdc16e8)
DEF(pop_all_iret, -0x9cf8ab)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x96bc30)
DEF(kernel_pmap_store, 0x3257a78)
DEF(crypt_singleton_array, 0x2e31830)
DEF(security_flags, 0x6506474)
DEF(targetid, 0x650647d)
DEF(qa_flags, 0x6506498)
DEF(utoken, 0x6506500)
#include "offset_list.txt"
END_FW()

START_FW(402)
DEF(allproc, 0x27edcb8)
DEF(idt, 0x64cdc80)
DEF(gdt_array, 0x64cee30)
DEF(tss_array, 0x64d0830)
DEF(pcpu_array, 0x64d2280)
DEF(doreti_iret, -0x9cf84c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x99002a)
DEF(rdmsr_start, -0x9d0cfa)
DEF(wrmsr_ret, -0x9d20cc)
DEF(dr2gpr_start, -0x9d6d93)
DEF(gpr2dr_1_start, -0x9d6c7a)
DEF(gpr2dr_2_start, -0x9d6b87)
DEF(mov_cr3_rax, -0x39702e)
DEF(mov_rdi_cr3, -0x39709e)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9d6f80)
DEF(mprotect_fix_start, -0x90ac61)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2cd3ad)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1df35e)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6c2989)
DEF(sigaction_fix_end, -0x6c2933)
DEF(sysents, 0x1709c0)
DEF(sysents_ps4, 0x168410)
DEF(sysentvec, 0xd11bb8)
DEF(sysentvec_ps4, 0xd11d30)
DEF(sceSblServiceMailbox, -0x6824c0)
DEF(sceSblAuthMgrSmIsLoadable2, -0x8a5c40)
DEF(mdbg_call_fix, -0x631e99)
DEF(syscall_before, -0x802311)
DEF(syscall_after, -0x8022ee)
DEF(malloc, -0xa9b90)
DEF(M_something, 0x1346080)
DEF(loadSelfSegment_epilogue, -0x8a54cd)
DEF(loadSelfSegment_watchpoint, -0x2cc9a8)
DEF(loadSelfSegment_watchpoint_lr, -0x8a5727)
DEF(decryptSelfBlock_watchpoint_lr, -0x8a538a)
DEF(decryptSelfBlock_epilogue, -0x8a52c3)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x8a4c55)
DEF(decryptMultipleSelfBlocks_epilogue, -0x8a47d2)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x8a58bc)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x8a5541)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8a5014)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8a488c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x8a5cbe)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x94a7f0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x94ada4)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x94ad2e)
DEF(sceSblPfsSetKeys, -0x94aaa0)
DEF(sceSblServiceCryptAsync, -0x8ed940)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8ed902)
DEF(copyin, -0x9908e0)
DEF(copyout, -0x990990)
DEF(crypt_message_resolve, -0x479df0)
DEF(justreturn, -0x9cf990)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xdc16e8)
DEF(pop_all_iret, -0x9cf8ab)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x96d208)
DEF(kernel_pmap_store, 0x3257a78)
DEF(crypt_singleton_array, 0x2e31830)
DEF(security_flags, 0x6505474)
DEF(targetid, 0x650547d)
DEF(qa_flags, 0x6505498)
DEF(utoken, 0x6505500)
#include "offset_list.txt"
END_FW()

START_FW(403)
DEF(allproc, 0x27edcb8)
DEF(idt, 0x64cdc80)
DEF(gdt_array, 0x64cee30)
DEF(tss_array, 0x64d0830)
DEF(pcpu_array, 0x64d2280)
DEF(doreti_iret, -0x9cf84c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x99002a /*-0x990a55*/)
DEF(rdmsr_start, -0x9d0cfa /*-0x9d6d02*/)
//DEF(rdmsr_end, -0x9d6cf9)
DEF(wrmsr_ret, -0x9d20cc)
DEF(dr2gpr_start, -0x9d6d93)
//DEF(dr2gpr_end, -0x9d6d7c)
DEF(gpr2dr_1_start, -0x9d6c7a)
//DEF(gpr2dr_1_end, -0x9d6c55)
DEF(gpr2dr_2_start, -0x9d6b87)
//DEF(gpr2dr_2_end, -0x9d6de9)
DEF(mov_cr3_rax, -0x396f9e)
DEF(mov_rdi_cr3, -0x39700e)
DEF(nop_ret, wrmsr_ret + 2 /*-0x28a3a0*/)
DEF(cpu_switch, -0x9d6f80)
DEF(mprotect_fix_start, -0x90ac61)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2cd31d)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1df2ce)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6c2989)
DEF(sigaction_fix_end, -0x6c2933)
DEF(sysents, 0x1709c0)
DEF(sysents_ps4, 0x168410)
DEF(sysentvec, 0xd11bb8)
DEF(sysentvec_ps4, 0xd11d30)
DEF(sceSblServiceMailbox, -0x6824c0)
DEF(sceSblAuthMgrSmIsLoadable2, -0x8a5c40)
DEF(mdbg_call_fix, -0x631ea9)
DEF(syscall_before, -0x802311)
DEF(syscall_after, -0x8022ee)
DEF(malloc, -0xa9b00)
DEF(M_something, 0x1346080)
DEF(loadSelfSegment_epilogue, -0x8a54cd)
DEF(loadSelfSegment_watchpoint, -0x2cc918)
DEF(loadSelfSegment_watchpoint_lr, -0x8a5727)
//DEF(decryptSelfBlock_watchpoint, -0x2cc88e)
DEF(decryptSelfBlock_watchpoint_lr, -0x8a538a)
DEF(decryptSelfBlock_epilogue, -0x8a52c3)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x8a4c55)
DEF(decryptMultipleSelfBlocks_epilogue, -0x8a47d2)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x8a58bc)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x8a5541)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8a5014)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8a488c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x8a5cbe)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x94a7f0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x94ada4)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x94ad2e)
DEF(sceSblPfsSetKeys, -0x94aaa0)
//DEF(panic, -0x21020)
DEF(sceSblServiceCryptAsync, -0x8ed940)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8ed902)
DEF(copyin, -0x9908e0)
DEF(copyout, -0x990990)
DEF(crypt_message_resolve, -0x479d60)
DEF(justreturn, -0x9cf990)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xdc16e8)
DEF(pop_all_iret, -0x9cf8ab)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x96be70)
DEF(kernel_pmap_store, 0x3257a78)
DEF(crypt_singleton_array, 0x2e31830)
DEF(security_flags, 0x6506474)
DEF(targetid, 0x650647d)
DEF(qa_flags, 0x6506498)
DEF(utoken, 0x6506500)
#include "offset_list.txt"
END_FW()

START_FW(450)
DEF(allproc, 0x27edcb8)
DEF(idt, 0x64cdc80)
DEF(gdt_array, 0x64cee30)
DEF(tss_array, 0x64d0830)
DEF(pcpu_array, 0x64d2280)
DEF(doreti_iret, -0x9cf84c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x99002a /*-0x990a55*/)
DEF(rdmsr_start, -0x9d0cfa /*-0x9d6d02*/)
//DEF(rdmsr_end, -0x9d6cf9)
DEF(wrmsr_ret, -0x9d20cc)
DEF(dr2gpr_start, -0x9d6d93)
//DEF(dr2gpr_end, -0x9d6d7c)
DEF(gpr2dr_1_start, -0x9d6c7a)
//DEF(gpr2dr_1_end, -0x9d6c55)
DEF(gpr2dr_2_start, -0x9d6b87)
//DEF(gpr2dr_2_end, -0x9d6de9)
DEF(mov_cr3_rax, -0x396e4e)
DEF(mov_rdi_cr3, -0x396ebe)
DEF(nop_ret, -0x396de1)
DEF(cpu_switch, -0x9d6f80)
DEF(mprotect_fix_start, -0x90ac61)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2cd16d)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1df11e)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6c2959)
DEF(sigaction_fix_end, -0x6c2903)
DEF(sysents, 0x1709c0)
DEF(sysents_ps4, 0x168410)
DEF(sysentvec, 0xd11bb8)
DEF(sysentvec_ps4, 0xd11d30)
DEF(sceSblServiceMailbox, -0x682490)
DEF(sceSblAuthMgrSmIsLoadable2, -0x8a5be0)
DEF(mdbg_call_fix, -0x631e79)
DEF(syscall_before, -0x8022e1)
DEF(syscall_after, -0x8022be)
DEF(malloc, -0xa9940)
DEF(M_something, 0x1346080)
DEF(loadSelfSegment_epilogue, -0x8a546d)
DEF(loadSelfSegment_watchpoint, -0x2cc768)
DEF(loadSelfSegment_watchpoint_lr, -0x8a56c7)
//DEF(decryptSelfBlock_watchpoint, -0x2cc6de)
DEF(decryptSelfBlock_watchpoint_lr, -0x8a532a)
DEF(decryptSelfBlock_epilogue, -0x8a5263)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x8a4bf5)
DEF(decryptMultipleSelfBlocks_epilogue, -0x8a4772)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x8a585c)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x8a54e1)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8a4fb4)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8a482c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x8a5c5e)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x94a7f0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x94ada4)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x94ad2e)
DEF(sceSblPfsSetKeys, -0x94aaa0)
//DEF(panic, -0x20e40)
DEF(sceSblServiceCryptAsync, -0x8ed930)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8ed8f2)
DEF(copyin, -0x9908e0)
DEF(copyout, -0x990990)
DEF(crypt_message_resolve, -0x479c30)
DEF(justreturn, -0x9cf990)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xdc16e8)
DEF(pop_all_iret, -0x9cf8ab)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x96db88)
DEF(kernel_pmap_store, 0x3257a78)
DEF(crypt_singleton_array, 0x2e31830)
DEF(security_flags, 0x6506474)
DEF(targetid, 0x650647d)
DEF(qa_flags, 0x6506498)
DEF(utoken, 0x6506500)
#include "offset_list.txt"
END_FW()

START_FW(451)
DEF(allproc, 0x27edcb8)
DEF(idt, 0x64cdc80)
DEF(gdt_array, 0x64cee30)
DEF(tss_array, 0x64d0830)
DEF(pcpu_array, 0x64d2280)
DEF(doreti_iret, -0x9cf84c)
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x99002a)
DEF(rdmsr_start, -0x9d0cfa)
//DEF(rdmsr_end, -0x9d6cf9)
DEF(wrmsr_ret, -0x9d20cc)
DEF(dr2gpr_start, -0x9d6d93)
//DEF(dr2gpr_end, -0x9d6d7c)
DEF(gpr2dr_1_start, -0x9d6c7a)
//DEF(gpr2dr_1_end, -0x9d6c55)
DEF(gpr2dr_2_start, -0x9d6b87)
//DEF(gpr2dr_2_end, -0x9d6de9)
DEF(mov_cr3_rax, -0x396aae)
DEF(mov_rdi_cr3, -0x396b1e)
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0x9d6f80)
DEF(mprotect_fix_start, -0x90ac61)
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x2ccdcd)
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x1ded7e)
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6c2959)
DEF(sigaction_fix_end, -0x6c2903)
DEF(sysents, 0x1709c0)
DEF(sysents_ps4, 0x168410)
DEF(sysentvec, 0xd11bb8)
DEF(sysentvec_ps4, 0xd11d30)
DEF(sceSblServiceMailbox, -0x682490)
DEF(sceSblAuthMgrSmIsLoadable2, -0x8a5be0)
DEF(mdbg_call_fix, -0x631e79)
DEF(syscall_before, -0x8022e1)
DEF(syscall_after, -0x8022be)
DEF(malloc, -0xa9510)
DEF(M_something, 0x1346080)
DEF(loadSelfSegment_epilogue, -0x8a546d)
DEF(loadSelfSegment_watchpoint, -0x2cc3c8)
DEF(loadSelfSegment_watchpoint_lr, -0x8a56c7)
//DEF(decryptSelfBlock_watchpoint, -0x2cc33e)
DEF(decryptSelfBlock_watchpoint_lr, -0x8a532a)
DEF(decryptSelfBlock_epilogue, -0x8a5263)
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x8a4bf5)
DEF(decryptMultipleSelfBlocks_epilogue, -0x8a4772)
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x8a585c)
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x8a54e1)
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8a4fb4)
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8a482c)
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x8a5c5e)
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x94a7f0)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x94ada4)
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x94ad2e)
DEF(sceSblPfsSetKeys, -0x94aaa0)
//DEF(panic, -0x20a10)
DEF(sceSblServiceCryptAsync, -0x8ed930)
DEF(sceSblServiceCryptAsync_deref_singleton, -0x8ed8f2)
DEF(copyin, -0x9908e0)
DEF(copyout, -0x990990)
DEF(crypt_message_resolve, -0x479890)
DEF(justreturn, -0x9cf990)
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xdc16e8)
DEF(pop_all_iret, -0x9cf8ab)
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x96d488)
DEF(kernel_pmap_store, 0x3257a78)
DEF(crypt_singleton_array, 0x2e31830)
DEF(security_flags, 0x6506474)
DEF(targetid, 0x650647d)
DEF(qa_flags, 0x6506498)
DEF(utoken, 0x6506500)
#include "offset_list.txt"
END_FW()

/*START_FW(550)
DEF(allproc, 0x290dd00)                                                       //ok
DEF(idt, 0x65fdca0)                                                           //ok
DEF(gdt_array, 0x65fee50)                                                     //ok
DEF(tss_array, 0x6600850)                                                     //ok
DEF(pcpu_array, 0x6612680)                                                    //ok
DEF(doreti_iret, -0xA14FD3)                                                   //ok
DEF(add_rsp_iret, doreti_iret - 7)
DEF(swapgs_add_rsp_iret, doreti_iret - 10)
DEF(rep_movsb_pop_rbp_ret, -0x9D57AA)                                         //ok
DEF(rdmsr_start, -0xA1656A)                                                   //ok
//DEF(rdmsr_end, -0x9d6cf9)
DEF(wrmsr_ret, -0xA1793C)                                                     //ok
DEF(dr2gpr_start, -0xA1BF53)                                                  //ok
//DEF(dr2gpr_end, -0x9d6d7c)
DEF(gpr2dr_1_start, -0xA1BE3A)                                                //ok
//DEF(gpr2dr_1_end, -0x9d6c55)
DEF(gpr2dr_2_start, -0xA1BD47)                                                //ok
//DEF(gpr2dr_2_end, -0x9d6de9)
DEF(mov_cr3_rax, -0x3B886E)                                                   //ok
DEF(mov_rdi_cr3, -0x3B88DE)                                                   //ok
DEF(nop_ret, wrmsr_ret + 2)
DEF(cpu_switch, -0xA1C140)                                                    //ok
DEF(mprotect_fix_start, -0x94EFE2)                                            //ok
DEF(mprotect_fix_end, mprotect_fix_start+6)
DEF(mmap_self_fix_1_start, -0x)                                                         //need
DEF(mmap_self_fix_1_end, mmap_self_fix_1_start+2)
DEF(mmap_self_fix_2_start, -0x)                                                         //need
DEF(mmap_self_fix_2_end, mmap_self_fix_2_start+2)
DEF(sigaction_fix_start, -0x6F7B30)                                           //ok
DEF(sigaction_fix_end, -0x6F7AEE)                                             //ok
DEF(sysents, 0x1a2210)                                                        //ok
DEF(sysents_ps4, 0x199c60)                                                    //ok
DEF(sysentvec, 0xdf0be8)                                                      //ok
DEF(sysentvec_ps4, 0xdf0d60)                                                  //ok
DEF(sceSblServiceMailbox, -0x6b9140)                                          //ok
DEF(sceSblAuthMgrSmIsLoadable2, -0x8f4190)                                    //ok
DEF(mdbg_call_fix, -0x668a71)                                                 //ok
DEF(syscall_before, -0x845731)                                                //ok
DEF(syscall_after, -0x84570E)                                                 //ok
DEF(malloc, -0xC3CD0)                                                         //ok
DEF(M_something, 0x14255A0)                                                   //ok
DEF(loadSelfSegment_epilogue, -0x8f3a1d)                                      //ok                                  
DEF(loadSelfSegment_watchpoint, -0x)                                                    //need
DEF(loadSelfSegment_watchpoint_lr, -0x8f3c17)                                 //ok
//DEF(decryptSelfBlock_watchpoint, -0x2cc33e)
DEF(decryptSelfBlock_watchpoint_lr, -0x8f38da)                                //ok
DEF(decryptSelfBlock_epilogue, -0x8f3813)                                     //ok
DEF(decryptMultipleSelfBlocks_watchpoint_lr, -0x8f31a5)                       //ok
DEF(decryptMultipleSelfBlocks_epilogue, -0x8f2d22)                            //ok
DEF(sceSblServiceMailbox_lr_verifyHeader, -0x8f3e0c)                          //ok
DEF(sceSblServiceMailbox_lr_loadSelfSegment, -0x8f3a91)                       //ok
DEF(sceSblServiceMailbox_lr_decryptSelfBlock, -0x8f3564)                      //ok
DEF(sceSblServiceMailbox_lr_decryptMultipleSelfBlocks, -0x8f2ddc)             //ok
DEF(sceSblServiceMailbox_lr_sceSblAuthMgrSmFinalize, -0x8f41ae)               //ok
DEF(sceSblServiceMailbox_lr_verifySuperBlock, -0x999530)                      //ok
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_1, -0x999ae4)                   //ok
DEF(sceSblServiceMailbox_lr_sceSblPfsClearKey_2, -0x999a6e)                   //ok
DEF(sceSblPfsSetKeys, -0x9997e0)                                              //ok
//DEF(panic, -0x20a10)
DEF(sceSblServiceCryptAsync, -0x93c670)                                       //ok
DEF(sceSblServiceCryptAsync_deref_singleton, -0x93c642)                       //ok
DEF(copyin, -0xa73514)                                                                   //??
DEF(copyout, -0xa735c4)                                                                  //??
DEF(crypt_message_resolve, -0x4b0298)                                         //ok
DEF(justreturn, -0xA15200)                                                    //ok
DEF(justreturn_pop, justreturn+8)
DEF(mini_syscore_header, 0xe9f938)                                            //ok
DEF(pop_all_iret, -0xA15032)                                                  //ok
DEF(pop_all_except_rdi_iret, pop_all_iret+4)
DEF(push_pop_all_iret, -0x9AFC70)                                             //ok
DEF(kernel_pmap_store, 0x3384a88)                                             //ok
DEF(crypt_singleton_array, 0x2f3d830)                                         //ok
DEF(security_flags, 0x66366EC)                                                //ok
DEF(targetid, 0x66366F5)                                                      //ok
DEF(qa_flags, 0x6636710)                                                      //ok
DEF(utoken, 0x6636778)                                                        //ok
#include "offset_list.txt"
END_FW()*/

void* dlsym(void*, const char*);

int set_offsets(void)
{
    uint32_t ver = r0gdb_get_fw_version() >> 16;
    switch(ver)
    {
#ifndef NO_BUILTIN_OFFSETS
    case 0x300: set_offsets_300(); break;
    case 0x310: set_offsets_310(); break;
    case 0x320: set_offsets_320(); break;
    case 0x321: set_offsets_321(); break;
    case 0x400: set_offsets_400(); break;
    case 0x402: set_offsets_402(); break;
    case 0x403: set_offsets_403(); break;
    case 0x450: set_offsets_450(); break;
    case 0x451: set_offsets_451(); break;
    //case 0x550: set_offsets_550(); break;    
#endif
    default: return -1;
    }
    return 0;
}
