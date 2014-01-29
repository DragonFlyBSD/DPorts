# $FreeBSD: textproc/ti-hunspell/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hunspell
PORTVERSION=	20090911
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
PKGNAMEPREFIX=	ti-
DISTNAME=	ti_ER-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Tigrigna hunspell dictionaries

EXTRACT_SUFX=	.zip
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/ti_ER.dic \
		%%DATADIR%%/ti_ER.aff \
		%%DATADIR%%/ti_ET.dic \
		%%DATADIR%%/ti_ET.aff
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/ti_ER.aff ${WRKSRC}/ti_ER.dic ${STAGEDIR}${DATADIR}/
	${LN} -s ti_ER.aff ${STAGEDIR}${DATADIR}/ti_ET.aff
	${LN} -s ti_ER.dic ${STAGEDIR}${DATADIR}/ti_ET.dic

.include <bsd.port.mk>
