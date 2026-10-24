PORTNAME=	vde
PORTVERSION=	1.5.7
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/OldFiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	User-mode virtual ethernet infrastructure
WWW=		https://vde.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS=	vde2

MAKE_ARGS=	CC="${CC}"
USE_LDCONFIG=	yes
USE_CSTD=	gnu89
USES=		cpe gmake tar:tgz
CPE_VENDOR=	${PORTNAME}_project

CFLAGS+=	-fPIC

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libvdetap.so

dfly-patch:
	${REINPLACE_CMD} -e 's@net/if_tun.h@net/tun/if_tun.h@g' \
		${WRKSRC}/vdetaplib/test.c \
		${WRKSRC}/vdetaplib/libvdetap.c \
		${WRKSRC}/tuntap.c \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
