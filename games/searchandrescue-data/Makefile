# New ports collection makefile for:	SearchAndRescue-data
# Date created:			10 June 2010
# Whom:				Jesse Smith <jessefrgsmith@yahoo.ca>
#
# $FreeBSD: ports/games/searchandrescue-data/Makefile,v 1.3 2012/11/17 05:57:52 svnexp Exp $
#

PORTNAME=	SearchAndRescue
PORTVERSION=	1.3.0
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME:tl}/Data_Files/
PKGNAMESUFFIX=	-data
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	jessefrgsmith@yahoo.ca
COMMENT=	The data files for SearchAndRescue flight simulator

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

DATADIR=	${PREFIX}/share/${PORTNAME:tl}

do-install:
	${MKDIR} ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${DATADIR}

.include <bsd.port.mk>
