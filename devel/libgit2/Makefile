# $FreeBSD: devel/libgit2/Makefile 328117 2013-09-24 11:54:00Z wg $

PORTNAME=	libgit2
PORTVERSION=	0.19.0
CATEGORIES=	devel

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Portable, pure C implementation of the Git core

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	libgit2
GH_TAGNAME=	v${PORTVERSION}
GH_COMMIT=	eddc1f1

USES=		cmake
USE_LDCONFIG=	yes
USE_PYTHON_BUILD=	yes

PLIST_SUB=	SHLIB_VER=${PORTVERSION}

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Does not install on sparc64: thread-local storage not supported
.endif

post-patch:
	@${REINPLACE_CMD} -e "s|/pkgconfig|/../libdata/pkgconfig|" ${WRKSRC}/CMakeLists.txt

.include <bsd.port.post.mk>
