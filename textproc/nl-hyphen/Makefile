# $FreeBSD: textproc/nl-hyphen/Makefile 328066 2013-09-23 21:50:51Z bapt $

PORTNAME=	hyphen
PORTVERSION=	2005.10.16
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
PKGNAMEPREFIX=	nl-
DISTNAME=	hyph_nl_NL-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Dutch hyphenation rules

LICENSE=	LGPL21

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/hyph_nl_NL.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_nl_NL.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
