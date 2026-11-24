PORTNAME=	unhare
DISTVERSION=	1.1.1
CATEGORIES=	archivers
MASTER_SITES=	https://github.com/UnitedMarsupials/unhare/releases/download/v${DISTVERSION}/

MAINTAINER=	ports@virtual-estates.net
COMMENT=	Extract the filesystem bundled into a Bun standalone binary
WWW=		https://github.com/UnitedMarsupials/unhare

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		tar:xz uidfix

MAKEFILE=	BSDmakefile

TEST_TARGET=	test

PLIST_FILES=	bin/${PORTNAME} \
		share/man/man1/${PORTNAME}.1.gz

LIB_DEPENDS= libelf.so:devel/libelf
CFLAGS= -I${LOCALBASE}/include/libelf -I${LOCALBASE}/include -L${LOCALBASE}/lib
.include <bsd.port.mk>
