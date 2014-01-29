# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: net/corkscrew/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	corkscrew
PORTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://www.agroman.net/corkscrew/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	HTTP tunnelling utility for SSH

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in NEWS README TODO
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
