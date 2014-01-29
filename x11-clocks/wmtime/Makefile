# Created by: Rich Neswold <rneswold@mcs.net>
# $FreeBSD: x11-clocks/wmtime/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wmtime
PORTVERSION=	1.0b2
PORTREVISION=	1
CATEGORIES=	x11-clocks windowmaker
MASTER_SITES=	http://web.cs.mun.ca/~gstarkes/wmaker/dockapps/files/ \
		http://freebsd.unixfreunde.de/sources/ \
		http://mirror2.unixfreunde.de/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Time/Date applet for WindowMaker

WRKSRC=		${WRKDIR}/wmtime.app/wmtime
USES=		imake
USE_XORG=	xpm
USE_CSTD=	gnu89

PLIST_FILES=	bin/wmtime

post-extract:
	${CP} ${WRKSRC}/../Imakefile ${WRKSRC}/Imakefile

.include <bsd.port.mk>
