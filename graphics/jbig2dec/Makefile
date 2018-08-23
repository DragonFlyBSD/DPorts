# $FreeBSD$

PORTNAME=	jbig2dec
PORTVERSION=	0.14
CATEGORIES=	graphics devel
MASTER_SITES=	http://downloads.ghostscript.com/public/${PORTNAME}/ \
		LOCAL/sunpoet:tests
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Decoder implementation of the JBIG2 image compression format

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

OPTIONS_DEFINE=	PNG TESTS
OPTIONS_DEFAULT=PNG
TESTS_DESC=	Download and use test-images for post-build testing

CONFIGURE_ENV=	ac_cv_func_getopt_long=yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
USES=		autoreconf libtool
USES+=		ssl
LDFLAGS+=	-L${OPENSSLLIB} -lcrypto

FILESDIR=	${.CURDIR}/does-not-exist
SHEBANG_FILES=	test_jbig2dec.py
python_CMD=	${PYTHON_CMD}

PNG_CONFIGURE_OFF=	--without-libpng
PNG_CONFIGURE_ON=	--with-libpng=${LOCALBASE}
PNG_LIB_DEPENDS=	libpng.so:graphics/png
TESTS_DISTFILES=	jb2streams${EXTRACT_SUFX}:tests
TESTS_TEST_TARGET=	check-TESTS
TESTS_USES=		python:build shebangfix

post-patch-PNG-on:
	@${REINPLACE_CMD} 's|png_check_sig|png_sig_cmp|g' ${WRKSRC}/configure

.include <bsd.port.mk>
