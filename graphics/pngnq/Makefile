# Created by: stb@lassitu.de
# $FreeBSD: graphics/pngnq/Makefile 325928 2013-09-01 22:50:06Z bapt $

PORTNAME=	pngnq
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	stb@lassitu.de
COMMENT=	A tool for quantizing PNG images in RGBA format

LICENSE=	BSD

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV+=	LIBS=-lpng
LDFLAGS+=	-L${LOCALBASE}/lib

USES=		pkgconfig

PORTDOCS=	README COPYING
PLIST_FILES=	bin/pngcomp bin/pngnq
MAN1=		pngnq.1

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
