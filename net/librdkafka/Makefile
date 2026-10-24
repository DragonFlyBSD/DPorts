PORTNAME=	librdkafka
DISTVERSIONPREFIX=	v
DISTVERSION=	2.8.0
CATEGORIES=	net

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Apache Kafka C/C++ library
WWW=		https://github.com/edenhill/librdkafka/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	bash:shells/bash \
	${LOCALBASE}/include/rapidjson/schema.h:devel/rapidjson
LIB_DEPENDS=	libcurl.so:ftp/curl \
	liblz4.so:archivers/liblz4 \
	libzstd.so:archivers/zstd

USES=		compiler:c11 gmake localbase:ldflags ssl
USE_GITHUB=	yes

GH_ACCOUNT=	edenhill

GNU_CONFIGURE=	yes
MAKE_ARGS=	pkgconfigdir=${PREFIX}/libdata/pkgconfig
CONFIGURE_ARGS+=	--disable-sasl \
					--enable-ssl \
					--enable-strip
LDFLAGS+=      -Wl,--undefined-version

USE_LDCONFIG=	yes

CFLAGS:= ${CFLAGS} -D__FreeBSD__=9
LIB_DEPENDS+= libnghttp2.so:www/libnghttp2
LIB_DEPENDS+= libssh2.so:security/libssh2
LIB_DEPENDS+= libpsl.so:dns/libpsl
LIB_DEPENDS+= libidn2.so:dns/libidn2
LIB_DEPENDS+= libunistring.so:devel/libunistring
.include <bsd.port.mk>
