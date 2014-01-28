# Created by: stb@lassitu.de
# $FreeBSD: graphics/pngnq/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
