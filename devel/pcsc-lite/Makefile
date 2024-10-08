PORTNAME=	pcsc-lite
PORTVERSION=	2.0.1
PORTEPOCH=	2
CATEGORIES=	devel security
MASTER_SITES=	https://pcsclite.apdu.fr/files/

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Middleware library to access a smart card using SCard API (PC/SC)
WWW=		https://pcsclite.apdu.fr/

LICENSE=	BSD3CLAUSE GPLv3+
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		libtool pathfix perl5 pkgconfig python shebangfix tar:bzip2
USE_LDCONFIG=	yes
USE_PERL5=	build
USE_RC_SUBR=	pcscd
PYTHON_NO_DEPENDS=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-libsystemd \
		--enable-usbdropdir=${PREFIX}/lib/pcsc/drivers/ \
		--enable-ipcdir=/var/run

INSTALL_TARGET=	install-strip
SHEBANG_FILES=	src/spy/pcsc-spy
SUB_FILES=	pkg-message

LIB_DEPENDS+=	libpolkit-gobject-1.so:sysutils/polkit

OPTIONS_DEFINE=	DOCS EXAMPLES
OPTIONS_GROUP=		FEATURES
OPTIONS_GROUP_FEATURES=	FILTER
FEATURES_DESC=		Default features knobs
FILTER_DESC=		Control (Ignore or Extend) reader names reported by PCSC
FILTER_CONFIGURE_ENABLE=	filter

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/pcsc/drivers
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/pcsc/services

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/example/Makefile.am ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/example/Makefile.in ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/example/pcsc_demo.c ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
