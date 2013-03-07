# Created by: Shen Chun-Hsing <statue@freebsd.netlab.cse.yzu.edu.tw>
# $FreeBSD: ports/textproc/stardict-rptts/Makefile,v 1.1 2013/02/25 16:34:45 svnexp Exp $

PORTNAME=	stardict-rptts
PORTVERSION=	2.1.0
CATEGORIES=	textproc
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	WyabdcRealPeopleTTS
DIST_SUBDIR=	stardict

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Real People TTS for StarDict

PROJECTHOST=	stardict-3

NO_BUILD=	yes
USE_BZIP2=	yes

do-install:
		${TAR} jxvf ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} -C ${PREFIX}/share

.include <bsd.port.mk>
