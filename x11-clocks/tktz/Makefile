# Created by: Alexander Gromnizki
# $FreeBSD: x11-clocks/tktz/Makefile 327778 2013-09-20 23:44:55Z bapt $

PORTNAME=	tktz
PORTVERSION=	0.2
PORTREVISION=	1
CATEGORIES=	x11-clocks tk
MASTER_SITES=	http://gromnizki.unixdev.net/soft/

MAINTAINER=	gromnizki@unixdev.net
COMMENT=	A Tcl/Tk-based timezone viewer

RUN_DEPENDS=	wish8.4:${PORTSDIR}/x11-toolkits/tk84

NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	@ ${MKDIR} ${PREFIX}/lib/tktz
	@ ${INSTALL_SCRIPT} ${WRKSRC}/tktz ${PREFIX}/lib/tktz
	@ ${LN} -sf ${PREFIX}/lib/tktz/tktz ${PREFIX}/bin
.for file in tktz.help README LICENSE NEWS
	@ ${INSTALL_DATA} ${WRKSRC}/${file} ${PREFIX}/lib/tktz
.endfor

.include <bsd.port.mk>
