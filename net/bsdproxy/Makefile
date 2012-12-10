# New ports collection makefile for:	bsdproxy
# Date created:		2 November 2001
# Whom:			roam@FreeBSD.org
#
# $FreeBSD: ports/net/bsdproxy/Makefile,v 1.10 2012/11/17 05:59:57 svnexp Exp $
#

PORTNAME=	bsdproxy
PORTVERSION=	0.04
CATEGORIES=	net
MASTER_SITES=	http://daveb.net/bsdproxy/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A TCP proxy, demonstrating use of the kevent(2)/kqueue(2) API

GNU_CONFIGURE=	yes
USE_GNOME=	glib12

DOCS=		ChangeLog README

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
