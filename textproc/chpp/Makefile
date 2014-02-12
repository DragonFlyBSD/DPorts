# Created by: Andrey Zakhvatov <andy@FreeBSD.org>
# $FreeBSD$

PORTNAME=	chpp
PORTVERSION=	0.3.5
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	http://www.complang.tuwien.ac.at/schani/chpp/files/ \
		http://freebsd.nsu.ru/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Non-intrusive full-featured text preprocessor

LICENSE=	GPLv2

LIB_DEPENDS=	libgc.so:${PORTSDIR}/devel/boehm-gc

USES=		gmake
USE_AUTOTOOLS=	autoheader aclocal automake autoconf
AUTOMAKE_ARGS=	--add-missing --copy --force-missing
CONFIGURE_ARGS=	--libdir=${PREFIX}/share

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INFO=		chpp

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.pre.mk>

.if ${ARCH} != "i386" && ${ARCH} != "x86_64"
BROKEN=		Does not compile
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		'/LDADD/s| gc/gc.a | -lgc | ; \
		 s|^YFLAGS|AM_YFLAGS|' ${WRKSRC}/Makefile.am

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in AUTHORS NEWS README
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/test && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.post.mk>
