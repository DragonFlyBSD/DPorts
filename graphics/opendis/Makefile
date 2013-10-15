# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: graphics/opendis/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	opendis
PORTVERSION=	0.0.3
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF/ods/ods/${PORTVERSION} \
		http://ods.sourceforge.net/dl/


MAINTAINER=	ports@FreeBSD.org
COMMENT=	Access Flashpoint Digita-based cameras, download images, and more

GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|-pedantic -W|-pedantic|g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's| -g| @CFLAGS@|g' ${WRKSRC}/src/Makefile.in

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in NEWS AUTHORS doc/ERRATA doc/PHILOSOPHY doc/THUMB
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
