# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: textproc/libguess/Makefile 328138 2013-09-24 14:14:06Z wg $

PORTNAME=	libguess
PORTVERSION=	1.1
CATEGORIES=	textproc devel
MASTER_SITES=	http://distfiles.atheme.org/

MAINTAINER=	wg@FreeBSD.org
COMMENT=	High-speed character set detection library

LIB_DEPENDS=	libmowgli.so:${PORTSDIR}/devel/libmowgli

USES=		gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAKE_ARGS+=	PREFIX="${STAGEDIR}${PREFIX}"

post-patch:
	@${REINPLACE_CMD} -e 's|$${DESTDIR}$${libdir}/pkgconfig|$${PREFIX}/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
