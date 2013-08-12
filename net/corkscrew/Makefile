# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: net/corkscrew/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

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
	@${MKDIR} ${DOCSDIR}
.for file in NEWS README TODO
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
