# New ports collection makefile for:	bar
# Date created:			Wed May 18 2005
# Whom:				Erik Greenwald <erik@smluc.org>
#
# $FreeBSD: ports/textproc/bar/Makefile,v 1.5 2012/11/17 06:01:52 svnexp Exp $
#

PORTNAME=	bar
PORTVERSION=	1.4
CATEGORIES=	textproc
MASTER_SITES=	http://www.theiling.de/downloads/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	erik@bz.bzflag.bz
COMMENT=	Cat with ASCII progress bar

USE_BZIP2=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/bar
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bar ${PREFIX}/bin

.include <bsd.port.mk>
