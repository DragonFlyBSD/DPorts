# $FreeBSD: Mk/Uses/iconv.mk 316636 2013-04-26 20:44:59Z mva $
#
# handle dependency on the iconv port
#
# MAINTAINER: portmgr@FreeBSD.org
#
# Feature:	iconv
# Usage:	USES=iconv
# Valid ARGS:	does not require args
#
#
.if !defined(_INCLUDE_USES_ICONV_MK)
_INCLUDE_USES_ICONV_MK=	yes

.if defined(iconv_ARGS)
IGNORE=	USES=iconv does not require args
.endif

LIB_DEPENDS+=	iconv.3:${PORTSDIR}/converters/libiconv

.endif
