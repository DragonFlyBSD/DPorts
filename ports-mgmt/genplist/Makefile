# New ports collection makefile for:	genplist
# Date created:		2007-04-19
# Whom:			Jason Bacon <jwbacon@tds.net>
#
# $FreeBSD: ports/ports-mgmt/genplist/Makefile,v 1.7 2012/11/17 06:00:45 svnexp Exp $
#

PORTNAME=	genplist
PORTVERSION=	0.6
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://personalpages.tds.net/~jwbacon/Ports/distfiles/ \
		http://jbacon.dyndns.org/~bacon/Ports/distfiles/

MAINTAINER=	jwbacon@tds.net
COMMENT=	Generates a static plist for a port

NO_BUILD=	yes

PLIST_FILES=	bin/genplist

MAN1=		genplist.1

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/genplist ${PREFIX}/bin
	@${INSTALL_MAN} ${WRKSRC}/genplist.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
