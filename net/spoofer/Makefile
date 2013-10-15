# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: net/spoofer/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	spoofer
PORTVERSION=	0.8
CATEGORIES=	net
MASTER_SITES=	http://spoofer.csail.mit.edu/

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	ANA Spoofer Project testing software

PLIST_FILES=	bin/spoofer
PORTDOCS=	README CHANGES

HAS_CONFIGURE=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
