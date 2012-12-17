# New ports collection makefile for:   wmtime
# Date created:        1 July 1998
# Whom:                Rich Neswold <rneswold@mcs.net>
#
# $FreeBSD: ports/x11-clocks/wmtime/Makefile,v 1.22 2012/11/17 06:03:24 svnexp Exp $
#

PORTNAME=	wmtime
PORTVERSION=	1.0b2
PORTREVISION=	1
CATEGORIES=	x11-clocks windowmaker
MASTER_SITES=	http://web.cs.mun.ca/~gstarkes/wmaker/dockapps/files/ \
		http://freebsd.unixfreunde.de/sources/ \
		http://mirror2.unixfreunde.de/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Time/Date applet for WindowMaker

PLIST_FILES=	bin/wmtime
WRKSRC=		${WRKDIR}/wmtime.app/wmtime
USE_IMAKE=	yes
USE_XORG=	xpm

post-extract:
	${CP} ${WRKSRC}/../Imakefile ${WRKSRC}/Imakefile

.include <bsd.port.mk>
