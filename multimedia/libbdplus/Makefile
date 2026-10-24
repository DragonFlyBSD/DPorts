PORTNAME=	libbdplus
DISTVERSION=	0.2.0
CATEGORIES=	multimedia
MASTER_SITES=	https://get.videolan.org/${PORTNAME}/${DISTVERSION}/ \
		https://download.videolan.org/pub/videolan/${PORTNAME}/${DISTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	BD+ System research implementation
WWW=		https://www.videolan.org/developers/libbdplus.html

LICENSE=	LGPL21

LIB_DEPENDS=	libaacs.so:multimedia/libaacs \
		libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error

USES=		autoreconf libtool pkgconfig tar:bzip2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-optimizations

CFLAGS= -Wno-deprecated-declarations
dfly-patch:
	${REINPLACE_CMD} -e 's@-D_POSIX_C_SOURCE@&__z@g' \
			 -e 's@-D_ISOC99_SOURCE@&__z@g' \
		${WRKSRC}/configure ${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's@[[:<:]]index[[:>:]]@dump_index@g' \
		${WRKSRC}/src/examples/convtab_dump.c

.include <bsd.port.mk>
