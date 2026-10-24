PORTNAME=	raphf
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.2
CATEGORIES=	devel
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Resource and persistent handles factory
WWW=		https://github.com/m6w6/ext-raphf

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake php:ext
USE_GITHUB=	yes
GH_ACCOUNT=	m6w6
GH_PROJECT=	ext-raphf

.include <bsd.port.pre.mk>

post-patch:
.if ${PHP_VER} >= 86
	@${REINPLACE_CMD} -e 's|ZEND_RESULT_CODE|zend_result|g' \
		${WRKSRC}/src/php_raphf_api.c \
		${WRKSRC}/src/php_raphf_api.h
.endif

.include <bsd.port.post.mk>
