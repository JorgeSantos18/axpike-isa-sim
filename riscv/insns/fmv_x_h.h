require_extension(EXT_INTERNAL_ZFH_MOVE);
require_fp;
WRITE_RD(sext32((int16_t)(static_cast<freg_t>(FRS1).v[0])));
