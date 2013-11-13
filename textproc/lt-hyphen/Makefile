# $FreeBSD: textproc/lt-hyphen/Makefile 332695 2013-11-04 11:36:02Z bapt $

PORTNAME=	hyphen
PORTVERSION=	2004.04.15
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
PKGNAMEPREFIX=	lt-
DISTNAME=	hyph_lt_LT-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Lithuanian hyphenation rules

LICENSE=	LGPL21

EXTRACT_SUFX=	.zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/hyph_lt_LT.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_lt_LT.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
