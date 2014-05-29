# $FreeBSD$
#
# handle lha archives
#
# Feature:	lha
# Usage:	USES=lha
#
.if !defined(_INCLUDE_USES_LHA_Mk)
_INCLUDE_USES_LHA_MK=	yes

EXTRACT_SUFX?=	.lzh

.if defined(lha_ARGS)
IGNORE=	Incorrect 'USES+=lha:${lha_ARGS}' expecting 'USES+=lha'
.endif

EXTRACT_DEPENDS+=	lha:${PORTSDIR}/archivers/lha
EXTRACT_CMD?=		${LHA_CMD}
LHA_BEFORE_ARGS?=	xfpw=${WRKDIR}
LHA_AFTER_ARGS?=

.if defined(EXTRACT_BEFORE_ARGS)
LHA_BEFORE_ARGS:= ${EXTRACT_BEFORE_ARGS}
.undef EXTRACT_BEFORE_ARGS
.endif

.if defined(EXTRACT_AFTER_ARGS)
LHA_AFTER_ARGS:= ${EXTRACT_AFTER_ARGS}
.undef EXTRACT_AFTER_ARGS
.endif

.endif
