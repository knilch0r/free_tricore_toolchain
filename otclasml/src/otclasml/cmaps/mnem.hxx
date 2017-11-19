/* $Id$
 * (L)
*/
#ifndef OTCLASML_MNEM_HXX
#define OTCLASML_MNEM_HXX 1

#include <otclasml/StringView.hxx>
#include <otclasml/inttypes.hxx>
#include <otclasml/ConstStringMap.hxx>

namespace otclasml { namespace mnem {

// There are 343 entries.
enum mnems_e : uint16_t {
	ABS,
	ABS_B,
	ABS_H,
	ABSDIF,
	ABSDIF_B,
	ABSDIF_H,
	ABSDIFS,
	ABSDIFS_H,
	ABSS,
	ABSS_H,
	ADD,
	ADD_A,
	ADD_B,
	ADD_H,
	ADDC,
	ADDI,
	ADDIH,
	ADDIH_A,
	ADDS,
	ADDS_H,
	ADDS_HU,
	ADDS_U,
	ADDSC_A,
	ADDSC_AT,
	ADDX,
	AND,
	AND_AND_T,
	AND_ANDN_T,
	AND_EQ,
	AND_GE,
	AND_GE_U,
	AND_LT,
	AND_LT_U,
	AND_NE,
	AND_NOR_T,
	AND_OR_T,
	AND_T,
	ANDN,
	ANDN_T,
	BISR,
	BMERGE,
	BSPLIT,
	CACHEA_I,
	CACHEA_W,
	CACHEA_WI,
	CACHEI_I,
	CACHEI_W,
	CACHEI_WI,
	CADD,
	CADDN,
	CALL,
	CALLA,
	CALLI,
	CLO,
	CLO_H,
	CLS,
	CLS_H,
	CLZ,
	CLZ_H,
	CMOV,
	CMOVN,
	CMPSWAP_W,
	CRC32,
	CSUB,
	CSUBN,
	DEBUG,
	DEXTR,
	DISABLE,
	DIV,
	DIV_U,
	DSYNC,
	DVADJ,
	DVINIT,
	DVINIT_B,
	DVINIT_BU,
	DVINIT_H,
	DVINIT_HU,
	DVINIT_U,
	DVSTEP,
	DVSTEP_U,
	ENABLE,
	EQ,
	EQ_A,
	EQ_B,
	EQ_H,
	EQ_W,
	EQANY_B,
	EQANY_H,
	EQZ_A,
	EXTR,
	EXTR_U,
	F_ADD_F,
	F_CMP_F,
	F_DIV_F,
	F_ITOF,
	F_MADD_F,
	F_MSUB_F,
	F_MUL_F,
	F_Q31TOF,
	F_QSEED_F,
	F_SUB_F,
	F_UPDFL,
	F_UTOF,
	FCALL,
	FCALLA,
	FCALLI,
	FRET,
	FTOI,
	FTOIZ,
	FTOQ31,
	FTOQ31Z,
	FTOU,
	FTOUZ,
	GE,
	GE_A,
	GE_U,
	IMASK,
	INS_T,
	INSERT,
	INSN_T,
	ISYNC,
	IXMAX,
	IXMAX_U,
	IXMIN,
	IXMIN_U,
	J,
	JA,
	JEQ,
	JEQ_A,
	JGE,
	JGE_U,
	JGEZ,
	JGTZ,
	JI,
	JL,
	JLA,
	JLEZ,
	JLI,
	JLT,
	JLT_U,
	JLTZ,
	JNE,
	JNE_A,
	JNED,
	JNEI,
	JNZ,
	JNZ_A,
	JNZ_T,
	JZ,
	JZ_A,
	JZ_T,
	LD_A,
	LD_B,
	LD_BU,
	LD_D,
	LD_DA,
	LD_H,
	LD_HU,
	LD_Q,
	LD_W,
	LDLCX,
	LDMST,
	LDUCX,
	LEA,
	LOOP,
	LOOPU,
	LT,
	LT_A,
	LT_B,
	LT_BU,
	LT_H,
	LT_HU,
	LT_U,
	LT_W,
	LT_WU,
	MADD,
	MADD_H,
	MADD_Q,
	MADD_U,
	MADDM_H,
	MADDMS_H,
	MADDR_H,
	MADDR_Q,
	MADDRS_H,
	MADDRS_Q,
	MADDS,
	MADDS_H,
	MADDS_Q,
	MADDS_U,
	MADDSU_H,
	MADDSUM_H,
	MADDSUMS_H,
	MADDSUR_H,
	MADDSURS_H,
	MADDSUS_H,
	MAX,
	MAX_B,
	MAX_BU,
	MAX_H,
	MAX_HU,
	MAX_U,
	MFCR,
	MIN,
	MIN_B,
	MIN_BU,
	MIN_H,
	MIN_HU,
	MIN_U,
	MOV,
	MOV_A,
	MOV_AA,
	MOV_D,
	MOV_U,
	MOVH,
	MOVH_A,
	MSUB,
	MSUB_H,
	MSUB_Q,
	MSUB_U,
	MSUBAD_H,
	MSUBADM_H,
	MSUBADMS_H,
	MSUBADR_H,
	MSUBADRS_H,
	MSUBADS_H,
	MSUBM_H,
	MSUBMS_H,
	MSUBR_H,
	MSUBR_Q,
	MSUBRS_H,
	MSUBRS_Q,
	MSUBS,
	MSUBS_H,
	MSUBS_Q,
	MSUBS_U,
	MTCR,
	MUL,
	MUL_H,
	MUL_Q,
	MUL_U,
	MULM_H,
	MULMS_H,
	MULR_H,
	MULR_Q,
	MULS,
	MULS_U,
	NAND,
	NAND_T,
	NE,
	NE_A,
	NEZ_A,
	NOP,
	NOR,
	NOR_T,
	NOT,
	OR,
	OR_AND_T,
	OR_ANDN_T,
	OR_EQ,
	OR_GE,
	OR_GE_U,
	OR_LT,
	OR_LT_U,
	OR_NE,
	OR_NOR_T,
	OR_OR_T,
	OR_T,
	ORN,
	ORN_T,
	PACK,
	PARITY,
	RESTORE,
	RET,
	RFE,
	RFM,
	RSLCX,
	RSTV,
	RSUB,
	RSUBS,
	RSUBS_U,
	SAT_B,
	SAT_BU,
	SAT_H,
	SAT_HU,
	SEL,
	SELN,
	SH,
	SH_AND_T,
	SH_ANDN_T,
	SH_EQ,
	SH_GE,
	SH_GE_U,
	SH_H,
	SH_LT,
	SH_LT_U,
	SH_NAND_T,
	SH_NE,
	SH_NOR_T,
	SH_OR_T,
	SH_ORN_T,
	SH_XNOR_T,
	SH_XOR_T,
	SHA,
	SHA_H,
	SHAS,
	ST_A,
	ST_B,
	ST_D,
	ST_DA,
	ST_H,
	ST_Q,
	ST_T,
	ST_W,
	STLCX,
	STUCX,
	SUB,
	SUB_A,
	SUB_B,
	SUB_H,
	SUBC,
	SUBS,
	SUBS_H,
	SUBS_HU,
	SUBS_U,
	SUBX,
	SVLCX,
	SWAP_W,
	SWAPMSK_W,
	SYSCALL,
	TRAPSV,
	TRAPV,
	UNPACK,
	WAIT,
	XNOR,
	XNOR_T,
	XOR,
	XOR_EQ,
	XOR_GE,
	XOR_GE_U,
	XOR_LT,
	XOR_LT_U,
	XOR_NE,
	XOR_T,
	NENTRIES
}; /* enum */

namespace mnem_detail {
	extern const ConstStringMap::String mnem_strings[NENTRIES + 1];
}

inline mnems_e toMnem(StringView s) {
	return (mnems_e) ConstStringMap::fromString(s, mnem_detail::mnem_strings, (uintn_t) NENTRIES);
}
inline StringView mnemToString(uintn_t val) {
	return ConstStringMap::toString(val, mnem_detail::mnem_strings, (uintn_t) NENTRIES);
}
inline StringView toString(mnems_e val) { return mnemToString((uint16_t) val); }

} } /* namespaces */
#endif /* _HXX */

