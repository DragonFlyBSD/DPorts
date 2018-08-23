# Created by: Eric Anholt <anholt@FreeBSD.org>
# $FreeBSD: head/x11/libX11/Makefile 477818 2018-08-22 19:47:21Z zeising $

PORTNAME=	libX11
PORTVERSION=	1.6.6
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X11 library

LICENSE=	MIT

USES=		cpe perl5
XORG_CAT=	lib
USE_XORG=	xau xdmcp xtrans xorgproto xcb
USE_PERL5=	build
CPE_VENDOR=	x

CONFIGURE_ARGS+=	--datadir=${PREFIX}/lib \
			--without-xmlto \
			--disable-specs
CONFIGURE_ENV+=	ac_cv_path_PS2PDF=""
INSTALL_TARGET=	install-strip

post-patch:
	@${REINPLACE_CMD} 's/test.*-traditional.*;/true;/' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} '/^install-data-am:/,/^$$/ \
		s/install-specDATA//' ${WRKSRC}/nls/Makefile.in

.include <bsd.port.mk>
