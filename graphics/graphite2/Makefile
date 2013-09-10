# $FreeBSD: graphics/graphite2/Makefile 326307 2013-09-04 18:06:07Z madpilot $

PORTNAME=	graphite2
PORTVERSION=	1.2.3
CATEGORIES=	graphics print
MASTER_SITES=	SF/silgraphite/${PORTNAME}
EXTRACT_SUFX=	.tgz

MAINTAINER=	office@FreeBSD.org
COMMENT=	Rendering capabilities for complex non-Roman writing systems

USES=		cmake iconv
USE_LDCONFIG=	yes
LDFLAGS+=	-L${LOCALBASE}/lib ${ICONV_LIB}

post-patch:
	@${REINPLACE_CMD} -e 's,/pkgconfig,data/pkgconfig,g' ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e 's/.$${GRAPHITE_API_REVISION}.$${GRAPHITE_API_AGE}//g' ${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
