# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD: graphics/giblib/Makefile 330692 2013-10-17 23:51:45Z amdmi3 $

PORTNAME=	giblib
PORTVERSION=	1.2.4
PORTREVISION=	11
CATEGORIES=	graphics devel
MASTER_SITES=	http://linuxbrit.co.uk/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A utility library that includes a wrapper for imlib2

USE_AUTOTOOLS=	libtool
USES=		pathfix pkgconfig
USE_EFL=	imlib2
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFAULT=DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|: install-docsDATA|:|g' ${WRKSRC}/Makefile.in

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in AUTHORS ChangeLog README TODO
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
