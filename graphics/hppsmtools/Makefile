# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: graphics/hppsmtools/Makefile 315177 2013-03-24 22:51:18Z beech $

PORTNAME=	hppsmtools
PORTVERSION=	1.1
PORTEPOCH=	1
CATEGORIES=	graphics
MASTER_SITES=	http://unimut.fsk.uni-heidelberg.de/demi/photosmart/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool for HP PhotoSmart C5340A & Konica Q-EZ digital cameras

LICENSE=	GPLv2

PORTDOCS=	README changes.txt
PLIST_FILES=	bin/psmdel bin/psmdir bin/psmget bin/psmsho

post-patch:
	@${REINPLACE_CMD} -e 's|^CC=|#CC=|g ; \
		 s|-Wall -pedantic|$$(CFLAGS)|g' ${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e '/typedef unsigned char/d' ${WRKSRC}/exif.h
	@${REINPLACE_CMD} -e '/<malloc.h>/d' ${WRKSRC}/psm*.c

.include <bsd.port.options.mk>

do-install:
.for file in psmdel psmdir psmget psmsho
	${INSTALL_PROGRAM} ${WRKSRC}/${file} ${PREFIX}/bin
.endfor
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
