# Created by: dburr@FreeBSD.org
# $FreeBSD: audio/napster/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	nap
PORTVERSION=	1.5.4
CATEGORIES+=	audio net
MASTER_SITES=	SF/nap/nap/${PORTVERSION}

MAINTAINER?=	ports@FreeBSD.org
COMMENT?=	MP3 sharing, search, and chat client for the OpenNAP network

CONFLICTS?=	ru-nap-*

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in NEWS README doc/napster.txt doc/userguide.html
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
