PORTNAME=	mypaint
DISTVERSIONPREFIX=v
DISTVERSION=	2.0.1
PORTREVISION=	4
CATEGORIES=	graphics

PATCH_SITES=	https://github.com/garynthompson/${PORTNAME}/commit/
# GTK input grab fix
PATCHFILES=	94c623b788462fadb3e292b918edc4e90adf4faa.patch:-p1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast painting/scribbling program
WWW=		http://mypaint.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	swig:devel/swig \
		mypaint-brushes2>0:graphics/mypaint-brushes2 \
		${PYNUMPY}
LIB_DEPENDS=	libjson-c.so:devel/json-c \
		liblcms2.so:graphics/lcms2 \
		libpng.so:graphics/png \
		libmypaint.so:graphics/libmypaint
RUN_DEPENDS=	mypaint-brushes2>0:graphics/mypaint-brushes2 \
		${PYNUMPY}

USES=		compiler:c++11-lib desktop-file-utils gettext gnome localbase \
		pkgconfig python tar:xz
USE_GITHUB=	yes
USE_GNOME=	gtk30 pygobject3 cairo librsvg2:run
USE_PYTHON=	distutils py3kplist noflavors
PYDISTUTILS_BUILD_TARGET=	build build_ext
CFLAGS+=	${CFLAGS_${CHOSEN_COMPILER_TYPE}}
CFLAGS_gcc=	-std=c99
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	OPENMP
OPTIONS_DEFAULT_x86_64=	OPENMP
OPTIONS_DEFAULT_powerpc64=	OPENMP
OPTIONS_DEFAULT_powerpc64le=	OPENMP

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/mypaint/lib/_mypaintlib*.so

.include <bsd.port.options.mk>

.if !${PORT_OPTIONS:MOPENMP}
PYDISTUTILS_BUILDARGS+=	--disable-openmp
.endif

.include <bsd.port.mk>
