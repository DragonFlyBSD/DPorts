# Created by: Alejandro Pulver <alepulver@FreeBSD.org>
# $FreeBSD: ports/games/tycho/Makefile,v 1.4 2012/11/30 12:59:51 svnexp Exp $

PORTNAME=	tycho
PORTVERSION=	0.1
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	alepulver
DISTNAME=	redcoder

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program to gather data (statistics) on Core War warriors

USE_BZIP2=	yes
USE_GMAKE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=	bin/tycho \
		bin/tycho-exstat

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/exstat ${PREFIX}/bin/${PORTNAME}-exstat

.include <bsd.port.mk>
