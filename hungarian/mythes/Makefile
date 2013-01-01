# New ports collection makefile for:	mythes
# Date created:		2011-07-21
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/hungarian/mythes/Makefile,v 1.6 2012/11/17 05:58:27 svnexp Exp $
#

PORTNAME=	mythes
PORTVERSION=	2003.09.29
PORTREVISION=	1
CATEGORIES=	hungarian textproc
MASTER_SITES=	LOCAL/sunpoet/${PORTNAME}/
DISTNAME=	thes_hu_HU-${PORTVERSION:C/\.//g}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Hungarian thesaurus

LICENSE=	GPLv2

USE_ZIP=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	%%DATADIR%%/th_hu_HU.dat \
		%%DATADIR%%/th_hu_HU.idx
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/th_hu_HU.dat ${WRKSRC}/th_hu_HU.idx ${DATADIR}/

.include <bsd.port.mk>
