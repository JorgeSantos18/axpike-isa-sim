require_extension(EXT_INTERNAL_ZFH_MOVE);
require_fp;
MMU.store<uint16_t>(RS1 + insn.s_imm(), static_cast<freg_t>(FRS2).v[0]);
