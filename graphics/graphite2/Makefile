# $FreeBSD: graphics/graphite2/Makefile 318550 2013-05-19 22:08:13Z bapt $

PORTNAME=	graphite2
PORTVERSION=	1.2.1
CATEGORIES=	graphics print
MASTER_SITES=	SF/silgraphite/${PORTNAME}
EXTRACT_SUFX=	.tgz

MAINTAINER=	office@FreeBSD.org
COMMENT=	Rendering capabilities for complex non-Roman writing systems

USES=		cmake iconv
USE_LDCONFIG=	yes
LDFLAGS+=	-L${LOCALBASE}/lib -liconv

post-patch:
	@${REINPLACE_CMD} -e 's,/pkgconfig,data/pkgconfig,g' ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e 's/.$${GRAPHITE_API_REVISION}.$${GRAPHITE_API_AGE}//g' ${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
