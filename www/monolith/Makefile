PORTNAME=	monolith
DISTVERSIONPREFIX=	v
DISTVERSION=	2.10.1
PORTREVISION=	8
CATEGORIES=	www

MAINTAINER=	lcook@FreeBSD.org
COMMENT=	CLI tool for saving complete web pages as a single HTML file
WWW=		https://github.com/Y2Z/monolith

LICENSE=	CC0-1.0
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	gmake:devel/gmake

USES=		cargo perl5 ssl
USE_GITHUB=	yes
GH_ACCOUNT=	Y2Z
USE_PERL5=	build

PLIST_FILES=	bin/${PORTNAME}

CARGO_ENV= OPENSSL_NO_VENDOR=1
.include <bsd.port.options.mk>

.if ${ARCH} == powerpc
LIB_DEPENDS+=	libatomic.so:lang/gcc${GCC_DEFAULT}
LDFLAGS+=	-L/usr/local/lib/gcc${GCC_DEFAULT} -latomic
.endif

USES:= ${USES:S/cargo/cargo:extra/}
.include <bsd.port.mk>
