# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: graphics/evas-loader-gif/Makefile 322768 2013-07-11 15:04:56Z miwi $

PORTNAME=	loader-gif
PORTVERSION=	1.7.7
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	evas-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	A hardware accelerated canvas API (GIF loader)

LICENSE=	BSD

LIB_DEPENDS=	gif:${PORTSDIR}/graphics/giflib \
		freetype:${PORTSDIR}/print/freetype2

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USES=		pkgconfig gmake
USE_EFL=	evas librt_hack libtool_hack
USE_LDCONFIG=	yes

MAKEDIRS=	${WRKSRC}/src/modules/loaders/gif

.include "../evas-core/Makefile.inc"
CONFIGURE_ARGS+=	--enable-image-loader-gif

LDFLAGS+=	-L${LOCALBASE}/lib -levas

post-patch:
	@${REINPLACE_CMD} -E \
		-e 's,\$$\(top_builddir\)/src/lib/\.libs,${LOCALBASE}/lib,' \
		-e 's,\$$\(top_builddir\)/src/lib/libevas\.la,,' \
		${MAKEDIRS:S,$,/Makefile.in,}

do-build:
	@(for DIR in ${MAKEDIRS}; do cd $${DIR}; ${SETENV} ${MAKE_ENV} ${GMAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${ALL_TARGET}; done)

do-install:
	@(for DIR in ${MAKEDIRS}; do cd $${DIR}; ${SETENV} ${MAKE_ENV} ${GMAKE} \
	    ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} ${INSTALL_TARGET}; done)

.include <bsd.port.mk>
