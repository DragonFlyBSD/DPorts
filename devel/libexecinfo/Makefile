# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: devel/libexecinfo/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libexecinfo
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	itetcu

MAINTAINER=	itetcu@FreeBSD.org
COMMENT=	A library for inspecting program's backtrace

USE_BZIP2=	yes
USE_LDCONFIG=	yes
MAKE_FLAGS=	LIBDIR=${PREFIX}/lib \
		INCLUDEDIR=${PREFIX}/include

PORTDOCS=	README

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
CFLAGS+=	-fno-omit-frame-pointer
.endif

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
