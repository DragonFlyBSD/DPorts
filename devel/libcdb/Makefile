PORTNAME=	libcdb
PORTVERSION=	g2020082801
CATEGORIES=	devel

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Constant database library
WWW=		https://github.com/rmind/libcdb

USES=		compiler:c11 gmake libtool:build

USE_GITHUB=	yes
GH_ACCOUNT=	rmind
GH_TAGNAME=	a187cec
WRKSRC_SUBDIR=	src
USE_LDCONFIG=	yes
MAKE_ENV=	DESTDIR=${STAGEDIR}${PREFIX} \
		INCDIR=${LOCALBASE}/include \
		LIBDIR=${LOCALBASE}/lib

dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
