#ifndef _AXPIKE_ENCODING_H_
#define _AXPIKE_ENCODING_H_

#define CSR_URKAV 0x8fe
#define CSR_URKST 0x8ff
#define CSR_SRKAV 0x9fe
#define CSR_SRKST 0x9ff
#define CSR_MRKAV 0xffe
#define CSR_MRKST 0x7ff
#define CSR_MRKACBHV 0x7fc
#define CSR_MRKDCBHV 0x7fd
#define CSR_MRKGROUP 0x7db
#define CSR_MRKADDR 0xffd

#endif





#ifdef DECLARE_CSR

DECLARE_CSR(urkav, CSR_URKAV)
DECLARE_CSR(urkst, CSR_URKST)
DECLARE_CSR(srkav, CSR_SRKAV)
DECLARE_CSR(srkst, CSR_SRKST)
DECLARE_CSR(mrkav, CSR_MRKAV)
DECLARE_CSR(mrkst, CSR_MRKST)
DECLARE_CSR(mrkacbhv, CSR_MRKACBHV)
DECLARE_CSR(mrkdcbhv, CSR_MRKDCBHV)
DECLARE_CSR(mrkgroup, CSR_MRKGROUP)
DECLARE_CSR(mrkaddr, CSR_MRKADDR)

#endif
