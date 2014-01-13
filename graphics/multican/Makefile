# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: graphics/multican/Makefile 338635 2014-01-04 09:07:29Z nemysis $

PORTNAME=	multican
DISTVERSION=	0.0.5
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	nemysis@FreeBSD.org
COMMENT=	Remote control utility for Canon DSLR cameras

LICENSE=	GPLv2

CFLAGS+=	-fPIC	# required at least on amd64
USE_LDCONFIG=	yes

PLIST_FILES=	bin/multican lib/libmultican.so.0 lib/libmultican.so \
		include/canonio.h include/usbio.h

PORTDOCS=	ChangeLog README TODO

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|endian.h|sys/&|' ${WRKSRC}/canonio.c \
		${WRKSRC}/usbio.c ${WRKSRC}/multican.c
	@${REINPLACE_CMD} -e 's|`getconf LFS_CFLAGS`|-w|' \
		${WRKSRC}/Makefile

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	${INSTALL_LIB} ${WRKSRC}/libmultican.so.0 ${STAGEDIR}${PREFIX}/lib/
	${LN} -sf libmultican.so.0 ${STAGEDIR}${PREFIX}/lib/libmultican.so
	${INSTALL_DATA} ${WRKSRC}/*.h ${STAGEDIR}${PREFIX}/include/

	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
