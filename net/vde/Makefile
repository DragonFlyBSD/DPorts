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
	${REINPLACE_CMD} -E -e 's/defined[ ]*\([ ]*__FreeBSD__[ ]*\)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		-e 's/^#([[:space:]]*)ifdef[[:space:]]+__FreeBSD__/#\1if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#([[:space:]]*)ifndef[[:space:]]+__FreeBSD__/#\1if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		${WRKSRC}/vde_switch.c ${WRKSRC}/vdetaplib/libvdetap.c ${WRKSRC}/vdetaplib/vdetap.c \
		${WRKSRC}/qemu/vdeq.c ${WRKSRC}/vde_plug.c ${WRKSRC}/vde.h \
		${WRKSRC}/slirpvde/tcp.h ${WRKSRC}/slirpvde/libslirp.h ${WRKSRC}/slirpvde/ip.h \
		${WRKSRC}/slirpvde/slirpvde.c ${WRKSRC}/slirpvde/slirp_config.h ${WRKSRC}/port.c \
		${WRKSRC}/hash.c ${WRKSRC}/tuntap.c

.include <bsd.port.mk>
