PORTNAME=	libressl
PORTVERSION=	3.2.3
CATEGORIES=	security devel
MASTER_SITES=	OPENBSD/LibreSSL
PKGNAMESUFFIX?=	-static

MAINTAINER=	zrj@ef.irc
COMMENT=	Free version of the SSL/TLS protocol forked from OpenSSL

LICENSE=	BSD4CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

CPE_VENDOR=	openbsd

OPTIONS_DEFINE=	NC
OPTIONS_DEFAULT=NC
NC_DESC=	Install TLS-enabled netcat

NC_CONFIGURE_ENABLE=	nc

GNU_CONFIGURE=	yes
GNU_CONFIGURE_PREFIX=	${PREFIX}/libressl-static
USES=		cpe libtool pathfix pkgconfig
OPTIONS_SUB=	yes
CFLAGS+=	-fpic -DPIC -Wl,--as-needed

CONFIGURE_ARGS+= --disable-shared --with-openssldir="${LOCALBASE}/etc/ssl"

INSTALL_TARGET=	install-strip
TEST_TARGET=	check

post-patch:
	${REINPLACE_CMD} -e '/^install-man:/s/install-man3//' \
		-e '/$$(MAKE) $$(AM_MAKEFLAGS) install-data-hook/d' \
		${WRKSRC}/man/Makefile.in

post-install:
	${RM} -r ${STAGEDIR}/${PREFIX}/etc/ssl/certs
	${RM} -r ${STAGEDIR}/${PREFIX}/man
	${MKDIR} -p ${STAGEDIR}/${PREFIX}/libressl-static/etc/ssl
	${MV} ${STAGEDIR}/${PREFIX}/etc/ssl ${STAGEDIR}/${PREFIX}/libressl-static/etc/

.include <bsd.port.mk>
