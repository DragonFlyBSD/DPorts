# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: ports/net/corkscrew/Makefile,v 1.13 2013/01/15 13:46:57 svnexp Exp $

PORTNAME=	corkscrew
PORTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://www.agroman.net/corkscrew/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A HTTP tunnelling utility for SSH

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
.for file in NEWS README TODO
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
