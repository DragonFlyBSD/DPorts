# Created by: Timothy Beyer <beyert@cs.ucr.edu>
# $FreeBSD: japanese/zinnia/Makefile 341530 2014-01-28 10:21:59Z danfe $

PORTNAME=	zinnia
PORTVERSION=	0.06
CATEGORIES=	japanese
MASTER_SITES=	SF

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Simple, customizable, and portable online handwriting recognition system

LICENSE=	BSD3CLAUSE

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

PORTDOCS=	index-ja.html index.html

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e \
		'/^pkgconfigdir/s!=.*!= ${PREFIX}/libdata/pkgconfig!' \
			${WRKSRC}/Makefile.in

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/doc/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
