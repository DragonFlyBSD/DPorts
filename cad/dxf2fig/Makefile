# Created by: ijliao
# $FreeBSD: cad/dxf2fig/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	dxf2fig
PORTVERSION=	2.13
CATEGORIES=	cad
MASTER_SITES=	http://ta.twi.tudelft.nl/ftp/dv/lemmens/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DXF to FIG converter

PLIST_FILES=	bin/dxf2fig

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|CFLAGS+=|g ; \
		 s|-O -s||g ; \
		 s|-I|#-I|g ; \
		 s|-L|#-L|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
