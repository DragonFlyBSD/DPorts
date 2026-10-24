PORTNAME=	liveMedia
DISTVERSION=	2026.10.17
PORTEPOCH=	2
CATEGORIES=	net devel
MASTER_SITES=	https://download.live555.com/ \
		LOCAL/jhale/${PORTNAME}
DISTNAME=	live.${DISTVERSION}

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	LIVE.COM Streaming Media
WWW=		http://www.live555.com/liveMedia/

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/COPYING.LESSER

USES=		compiler:c++11-lang cpe gmake ssl
CPE_VENDOR=	live555
CPE_PRODUCT=	streaming_media
USE_CXXSTD=	c++11
USE_LDCONFIG=	yes

HAS_CONFIGURE=		yes
CONFIGURE_SCRIPT=	genMakefiles
CONFIGURE_ARGS= fixed-dragonfly

WRKSRC=		${WRKDIR}/live

USE_GCC_VERSION= ${GCC_DEFAULT}
CXXFLAGS= -DNO_STD_LIB=1
post-patch:
	@${REINPLACE_CMD} \
		-e '/^PREFIX/s|=|?=|' \
			${WRKSRC}/*/Makefile.head
	@${REINPLACE_CMD} \
		-e 's|install -m 644 include|$${BSD_INSTALL_DATA} include|' \
		-e 's|install -m 644|$${BSD_INSTALL_LIB}|' \
		-e 's|install -m 755|$${BSD_INSTALL_PROGRAM}|' \
			${WRKSRC}/*/Makefile.tail

dfly-patch:
	${CP} ${WRKSRC}/config.linux-with-shared-libraries ${WRKSRC}/config.fixed-dragonfly
	${REINPLACE_CMD} -e 's/(INCLUDES)/& -I\/usr\/local\/include /' ${WRKSRC}/config.fixed-dragonfly
	${REINPLACE_CMD} -e "s@LIBRARY_LINK_OPTS)@& -L${LOCALBASE}/lib -lcrypto@g" \
		${WRKSRC}/liveMedia/Makefile.tail


.include <bsd.port.mk>
