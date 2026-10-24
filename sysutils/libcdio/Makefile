PORTNAME=	libcdio
DISTVERSION=	2.3.0
CATEGORIES=	sysutils
MASTER_SITES=	https://github.com/${PORTNAME}/${PORTNAME}/releases/download/${DISTVERSION}/

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Compact Disc Input and Control Library
WWW=		https://github.com/libcdio/libcdio/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

TEST_DEPENDS=	genisoimage:sysutils/genisoimage

USES=		compiler:c11 cpe gmake iconv libtool localbase \
		ncurses pathfix perl5 pkgconfig tar:bzip2
CPE_VENDOR=	gnu
USE_LDCONFIG=	yes
USE_PERL5=	build

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-cddb \
		--disable-static \
		--disable-vcd-info \
		${ICONV_CONFIGURE_ARG}

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

LIBS+=		${ICONV_LIB}

INFO=		libcdio

CONFIGURE_ENV= am_cv_func_iconv_works=yes
dfly-patch:
	${REINPLACE_CMD} -e 's@<cam/@<bus/cam/@g' \
			 -e 's@__FreeBSD_version@900001@g' \
			 -e 's@__FreeBSD_kernel_version@900001@g' \
		${WRKSRC}/lib/driver/FreeBSD/freebsd.h

.include <bsd.port.mk>
