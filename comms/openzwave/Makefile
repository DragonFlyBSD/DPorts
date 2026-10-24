PORTNAME=	openzwave
PORTVERSION=	1.4.3254
CATEGORIES=	comms

MAINTAINER=	johan@stromnet.se
COMMENT=	Open-source interface to Z-Wave networks
WWW=		http://www.openzwave.net/

LICENSE=	LGPL20
LICENSE_FILE=	${WRKSRC}/license/license.txt

USES=		gmake iconv pkgconfig
USE_GITHUB=	yes
USE_LDCONFIG=	yes

GH_ACCOUNT=	OpenZWave
GH_PROJECT=	open-zwave
GH_TAGNAME=	f339aa6

CFLAGS+=	-Wno-error
MAKE_ARGS=	VERSION_REV=${PORTVERSION:E} LIBDIR=${WRKSRC}

CONFLICTS_INSTALL=	openzwave-devel # bin/MinOZW

OPTIONS_DEFINE=	DOCS DOXYGEN
OPTIONS_SUB=	yes

DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen
DOXYGEN_IMPLIES=	DOCS
DOXYGEN_MAKE_ARGS=	ENABLE_DOCS=1 docdir=${DOCSDIR}
DOXYGEN_PORTDOCS=	*

post-install:
	${MV} ${STAGEDIR}${ETCDIR} ${STAGEDIR}${DATADIR}
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/lib/libopenzwave.so.1.4
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/bin/MinOZW

post-install-DOXYGEN-on:
	${RM} ${STAGEDIR}${DOCSDIR}/Doxyfile.in

dfly-patch:
	${REINPLACE_CMD} -e 's@__FreeBSD__@__DragonFly__@g' \
			 -e 's@__FreeBSD_version < 1000000@0@g' \
		${WRKSRC}/cpp/hidapi/libusb/hid.c \
		${WRKSRC}/cpp/src/aes/brg_endian.h \
		${WRKSRC}/cpp/src/value_classes/Value.h
	${REINPLACE_CMD} -e '/UNAME/s@FreeBSD@DragonFly@g' \
			 -e '/error FreeBSD pre/d' \
		${WRKSRC}/cpp/build/Makefile


dfly-install:
	${RM} -vf ${STAGEDIR}${LOCALBASE}/share/doc/${PORTNAME}-${PORTVERSION}/Doxyfile.in
	${RM} -vf ${STAGEDIR}${LOCALBASE}/share/doc/${PORTNAME}-${PORTVERSION}/default.htm
	${RM} -rvf ${STAGEDIR}${LOCALBASE}/share/doc/${PORTNAME}-${PORTVERSION}/general
	${RM} -rvf ${STAGEDIR}${LOCALBASE}/share/doc/${PORTNAME}-${PORTVERSION}/images+css
	${RMDIR} ${STAGEDIR}${LOCALBASE}/share/doc/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
