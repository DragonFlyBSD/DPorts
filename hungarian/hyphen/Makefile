# $FreeBSD: hungarian/hyphen/Makefile 332695 2013-11-04 11:36:02Z bapt $

PORTNAME=	hyphen
PORTVERSION=	2007.05.17
PORTREVISION=	1
CATEGORIES=	hungarian textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
DISTNAME=	hyph_hu_HU-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Hungarian hyphenation rules

LICENSE=	LGPL21

EXTRACT_SUFX=	.zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/hyph_hu_HU.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/hyph_hu_HU.dic ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
