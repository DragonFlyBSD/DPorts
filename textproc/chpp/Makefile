# New ports collection makefile for:	chpp
# Date created:				4 May 1999
# Whom:					Andrey Zakhvatov <andy@FreeBSD.org>
#
# $FreeBSD: textproc/chpp/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	chpp
PORTVERSION=	0.3.5
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.complang.tuwien.ac.at/schani/chpp/files/ \
		http://freebsd.nsu.ru/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Non-intrusive full-featured text preprocessor

LICENSE=	GPLv2

LIB_DEPENDS=	gc.1:${PORTSDIR}/devel/boehm-gc

USE_GMAKE=	yes
USE_AUTOTOOLS=	autoheader aclocal automake autoconf
AUTOMAKE_ARGS=	--add-missing --copy --force-missing
CONFIGURE_ARGS=	--libdir=${PREFIX}/share

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INFO=		chpp

.include <bsd.port.pre.mk>

.if ${ARCH} != "i386" && ${ARCH} != "x86_64"
BROKEN=		Does not compile
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		'/LDADD/s| gc/gc.a | -lgc | ; \
		 s|^YFLAGS|AM_YFLAGS|' ${WRKSRC}/Makefile.am

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in AUTHORS NEWS README
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@(cd ${WRKSRC}/test && ${COPYTREE_SHARE} . ${EXAMPLESDIR})
.endif

.include <bsd.port.post.mk>
