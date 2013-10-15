# $FreeBSD: polish/mythes/Makefile 327761 2013-09-20 22:34:42Z bapt $

PORTNAME=	mythes
PORTVERSION=	1.5
PORTREVISION=	1
CATEGORIES=	polish textproc
MASTER_SITES=	SF/synonimy/synonimy/${PORTVERSION}/
DISTNAME=	OOo2-Thesaurus-${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Polish thesaurus

LICENSE=	LGPL21

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/th_pl_PL_v2.dat \
		%%DATADIR%%/th_pl_PL_v2.idx
PLIST_DIRSTRY=	%%DATADIR%%

NO_STAGE=	yes
do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/th_pl_PL_v2.dat ${WRKSRC}/th_pl_PL_v2.idx ${DATADIR}/

.include <bsd.port.mk>
