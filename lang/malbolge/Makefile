# Created by: Dereckson <dereckson@gmail.com>
# $FreeBSD: lang/malbolge/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	malbolge
PORTVERSION=	0.1.1
CATEGORIES=	lang
MASTER_SITES=	http://cdn.bitbucket.org/dereckson/${PORTNAME}/downloads/

MAINTAINER=	dereckson@gmail.com
COMMENT=	An esoteric language

PLIST_FILES=	bin/malbolge

PORTDOCS=	*

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/malbolge ${PREFIX}/bin

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/malbolge.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
