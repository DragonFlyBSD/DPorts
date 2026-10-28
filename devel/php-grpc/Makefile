PORTNAME=	grpc
DISTVERSIONPREFIX=	v
DISTVERSION=	1.84.0
CATEGORIES=	devel net
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	High performance, general RPC framework
WWW=		https://github.com/grpc/grpc-php-ext

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++17-lang php:ext
IGNORE_WITH_PHP=	86
USE_GITHUB=	yes
GH_ACCOUNT=	grpc
GH_PROJECT=	grpc-php-ext

dfly-patch:
	${REINPLACE_CMD} -e 's|FreeBSD|DragonFly|' \
		${WRKSRC}/third_party/abseil-cpp/absl/base/config.h \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/sysinfo.cc \
		${WRKSRC}/third_party/abseil-cpp/absl/base/internal/raw_logging.cc

.include <bsd.port.mk>
