# $FreeBSD$

PORTNAME=	jbig2dec
PORTVERSION=	0.19
CATEGORIES=	graphics devel
MASTER_SITES=	https://github.com/ArtifexSoftware/ghostpdl-downloads/releases/download/gs9531/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Decoder implementation of the JBIG2 image compression format

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf libtool
USES+=		ssl
LDFLAGS+=	-L${OPENSSLLIB} -lcrypto
FILESDIR=	${.CURDIR}/does-not-exist

CONFIGURE_ENV=	ac_cv_func_getopt_long=yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	PNG
OPTIONS_DEFAULT=PNG

PNG_CONFIGURE_OFF=	--without-libpng
PNG_CONFIGURE_ON=	--with-libpng=${LOCALBASE}
PNG_LIB_DEPENDS=	libpng.so:graphics/png

pre-configure:
	@cd ${WRKSRC}/ && ${SH} autogen.sh

.include <bsd.port.mk>
