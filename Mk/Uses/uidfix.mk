# $FreeBSD: Mk/Uses/uidfix.mk 331944 2013-10-29 13:14:41Z rene $
#
# Changes some default behaviour of build systems to allow installing as user.
#
# MAINTAINER:	bapt@FreeBSD.org
#
# Feature:	uidfix
# Usage:	USES=uidfix
# Valid ARGS:	none
#
.if !defined(_INCLUDE_USES_UIDFIX_MK)
_INCLUDE_USES_UIDFIX_MK=	yes
.if ${UID} != 0
MAKE_ENV+=	BINOWN=${UID} SHAREOWN=${UID} CONFOWN=${UID}
BINOWN=	${UID}
SHAREOWN=	${UID}
WWWOWN=	${UID}
.endif
.endif
