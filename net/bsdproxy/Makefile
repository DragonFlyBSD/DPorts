# Created by: roam@FreeBSD.org
# $FreeBSD: net/bsdproxy/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	bsdproxy
PORTVERSION=	0.04
CATEGORIES=	net
MASTER_SITES=	http://daveb.net/bsdproxy/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A TCP proxy, demonstrating use of the kevent(2)/kqueue(2) API

GNU_CONFIGURE=	yes
USE_GNOME=	glib12
NO_STAGE=	yes

DOCS=		ChangeLog README

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
