PORTNAME=	quickjs
DISTVERSION=	2026.06.04
CATEGORIES=	lang devel
MASTER_SITES=	https://bellard.org/${PORTNAME}/
DISTNAME=	${PORTNAME}-${DISTVERSION:S/./-/g}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Embeddable Javascript interpreter in C
WWW=		https://bellard.org/quickjs/

LICENSE=	MIT

USES=		compiler:c11 cpe gmake tar:xz
USE_LDCONFIG=	yes

CPE_VENDOR=	${PORTNAME}_project

CONFLICTS=	quickjs-ng

TEST_TARGET=	test

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == gcc
post-patch:
	@${REINPLACE_CMD} -e 's/%%GCC_DEFAULT%%/${GCC_DEFAULT}/' \
		${WRKSRC}/Makefile
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libquickjs.so

dfly-patch:
	${REINPLACE_CMD} -e 's@\(HOST_CC=\).*@\1gcc@g' -e 's@\([[:<:]]CC=\).*@\1gcc@g' \
		${WRKSRC}/Makefile

.include <bsd.port.post.mk>
