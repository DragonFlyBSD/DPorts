# Created by: Stefan Bethke <stb@lassitu.de>
# $FreeBSD: www/ttf2eot/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	ttf2eot
DISTVERSION=	0.0.2-2
CATEGORIES=	www converters
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	stb@lassitu.de
COMMENT=	Convert TTF font file to EOT web embeddable file

USE_GMAKE=	yes
ALL_TARGET=	ttf2eot

PLIST_FILES=	bin/ttf2eot
PORTDOCS=	README

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|g++|${CXX}|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ttf2eot ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/
.endif

.include <bsd.port.mk>
