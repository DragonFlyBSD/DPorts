PORTNAME=	gnu-efi
PORTVERSION=	3.0.15
CATEGORIES=	devel
MASTER_SITES=	SF/gnu-efi

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	SDK for EFI applications
WWW=		https://gnu-efi.sourceforge.net/

LICENSE=	GPLv2

ONLY_FOR_ARCHS=	amd64 i386

BUILD_DEPENDS=	${LOCALBASE}/bin/ar:devel/binutils

USES=		compiler:c++11-lib gmake tar:bz2

CFLAGS+=	-fPIC
CPPFLAGS+=	-fPIC
MAKE_ARGS+=	CC=${CC} HOSTCC=${CC} AR=${AR}

.include <bsd.port.pre.mk>

.if ${ARCH} == x86_64
PLIST_SUB+=	ARCH_x86_64="" ARCH_i386="@comment "
.elif ${ARCH} == i386
PLIST_SUB+=	ARCH_i386="" ARCH_x86_64="@comment "
.endif

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.o

.include <bsd.port.post.mk>
