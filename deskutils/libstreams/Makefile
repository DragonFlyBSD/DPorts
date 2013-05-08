# $FreeBSD: deskutils/libstreams/Makefile 316654 2013-04-27 08:50:46Z mva $

PORTNAME=	libstreams
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: streams library

USES=		iconv
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

post-patch:
	${REINPLACE_CMD} -e \
		's,$${LIB_DESTINATION}/pkgconfig,libdata/pkgconfig,' \
		${WRKSRC}/libstreams/CMakeLists.txt

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
