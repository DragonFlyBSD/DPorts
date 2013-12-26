# Created by: Douglas Carmichael <dcarmich@mcs.com>
# $FreeBSD: graphics/photopc/Makefile 336812 2013-12-18 10:20:48Z nemysis $

PORTNAME=	photopc
PORTVERSION=	3.07
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	nemysis@FreeBSD.org
COMMENT=	Control cameras based on Sierra Imaging chipset and compatibles

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/epinfo \
		bin/photopc \
		include/eph_io.h \
		lib/libeph_io.a

MAN1=		epinfo.1 photopc.1

PORTDOCS=	README protocol.htm usage.htm

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
