PORTNAME=	aaphoto
PORTVERSION=	0.43.1
DISTVERSIONPREFIX=	v
PORTREVISION=	15
CATEGORIES=	graphics

MAINTAINER=	mail@log69.com
COMMENT=	Auto Adjust Photo, automatic color correction of photos
WWW=		http://log69.com/aaphoto_en.html

LICENSE=	GPLv3

LIB_DEPENDS=	libjasper.so:graphics/jasper \
		libpng.so:graphics/png

USE_GITHUB=	yes
GH_ACCOUNT=	log69

GNU_CONFIGURE=	yes
USES=		jpeg

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/aaphoto

.include <bsd.port.pre.mk>

.if (${ARCH} == x86_64 || ${ARCH} == i386)
CFLAGS+=	-fopenmp -D__OPENMP__
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/aaphoto ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
