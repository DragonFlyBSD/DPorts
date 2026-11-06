PORTNAME=	librdkafka
DISTVERSIONPREFIX=	v
DISTVERSION=	2.16.0
CATEGORIES=	net

MAINTAINER=	pizzamig@FreeBSD.org
COMMENT=	Apache Kafka C/C++ library
WWW=		https://github.com/confluentinc/librdkafka/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl \
		liblz4.so:archivers/liblz4 \
		libzstd.so:archivers/zstd

USES=		cmake:testing compiler:c11 localbase:ldflags ssl

USE_GITHUB=	yes
GH_ACCOUNT=	confluentinc

USE_LDCONFIG=	yes

CMAKE_OFF=	RDKAFKA_BUILD_TESTS

CMAKE_TESTING_ON=	RDKAFKA_BUILD_TESTS

# several tests fail, see https://github.com/confluentinc/librdkafka/issues/5663
TESTING_UNSAFE=	yes

OPTIONS_DEFINE=	SASL
SASL_DESC=	SASL support (tests might also benefit from)

SASL_LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2
SASL_CMAKE_BOOL=	WITH_SASL

CFLAGS:= ${CFLAGS} -D__FreeBSD__=9
LIB_DEPENDS+= libnghttp2.so:www/libnghttp2
LIB_DEPENDS+= libssh2.so:security/libssh2
LIB_DEPENDS+= libpsl.so:dns/libpsl
LIB_DEPENDS+= libidn2.so:dns/libidn2
LIB_DEPENDS+= libunistring.so:devel/libunistring
.include <bsd.port.mk>
