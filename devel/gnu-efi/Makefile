PORTNAME=	gnu-efi
PORTVERSION=	3.0.18
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/gnu-efi

MAINTAINER=	egypcio@FreeBSD.org
COMMENT=	SDK for EFI applications
WWW=		https://gnu-efi.sourceforge.net/

LICENSE=	BSD3CLAUSE

ONLY_FOR_ARCHS=	amd64 i386

BUILD_DEPENDS=	${LOCALBASE}/bin/ar:devel/binutils

USES=		compiler:c++11-lib gmake tar:bz2

CPPFLAGS+=	-Wno-incompatible-pointer-types
MAKE_ARGS+=	CC=${CC} HOSTCC=${CC} AR=${AR}

.include <bsd.port.pre.mk>

.if ${ARCH} == x86_64
PLIST_SUB+=	ARCH_x86_64="" ARCH_i386="@comment "
.elif ${ARCH} == i386
PLIST_SUB+=	ARCH_i386="" ARCH_x86_64="@comment "
.endif

.include <bsd.port.post.mk>
