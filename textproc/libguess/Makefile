# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: textproc/libguess/Makefile 322335 2013-07-05 14:51:09Z wg $

PORTNAME=	libguess
PORTVERSION=	1.1
CATEGORIES=	textproc devel
MASTER_SITES=	http://distfiles.atheme.org/

MAINTAINER=	wg@FreeBSD.org
COMMENT=	High-speed character set detection library

LIB_DEPENDS=	mowgli:${PORTSDIR}/devel/libmowgli

USES=		gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|$${DESTDIR}$${libdir}/pkgconfig|$${PREFIX}/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
