# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: ports/x11/ecore-imf/Makefile,v 1.13 2013/01/15 17:46:04 svnexp Exp $

PORTNAME=	imf
PORTVERSION=	1.7.5
CATEGORIES=	x11 enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	ecore-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Enlightenment core abstraction library (IMF module)

LICENSE=	BSD

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	ecore libtool_hack
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes
BUILD_WRKSRC=	${WRKSRC}/src/lib/ecore_imf
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include "../../devel/ecore-main/Makefile.inc"

CONFIGURE_ARGS+=	--enable-ecore-con \
			--enable-ecore-imf

LDFLAGS+=		-L${LOCALBASE}/lib -lecore

post-patch:
	@${REINPLACE_CMD} -E \
		-e 's,\$$\(top_builddir\)/src/lib/ecore/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_con/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore/libecore\.la,,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_con/libecore_con\.la,,'\
		${BUILD_WRKSRC}/Makefile.in

post-install:
	${INSTALL_DATA} ${WRKSRC}/ecore-imf.pc \
		${PREFIX}/libdata/pkgconfig/

.include <bsd.port.mk>
