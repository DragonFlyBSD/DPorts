# New ports collection makefile for:	telbook
# Date created:				19 May 2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/misc/telbook/Makefile,v 1.14 2012/11/17 05:59:45 svnexp Exp $

PORTNAME=	telbook
PORTVERSION=	0.4
PORTREVISION=	6
CATEGORIES=	misc
MASTER_SITES=	http://home.arcor.de/kaffeetisch/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple telephone book

RUN_DEPENDS=	p5-Gtk2>=0:${PORTSDIR}/x11-toolkits/p5-Gtk2

NO_BUILD=	yes
USE_BZIP2=	yes

PORTDOCS=	README
PLIST_FILES=	bin/telbook

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/telbook ${PREFIX}/bin
.ifndef (NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
