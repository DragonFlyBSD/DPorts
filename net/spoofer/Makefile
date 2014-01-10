# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: net/spoofer/Makefile 337794 2013-12-27 19:47:35Z jadawin $

PORTNAME=	spoofer
PORTVERSION=	0.8
CATEGORIES=	net
MASTER_SITES=	http://spoofer.csail.mit.edu/

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	ANA Spoofer Project testing software

PLIST_FILES=	bin/spoofer
PORTDOCS=	README CHANGES

HAS_CONFIGURE=	yes

.include <bsd.port.options.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
