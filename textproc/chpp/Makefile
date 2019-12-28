# Created by: Andrey Zakhvatov <andy@FreeBSD.org>
# $FreeBSD$

PORTNAME=	chpp
PORTVERSION=	0.3.5
PORTREVISION=	6
CATEGORIES=	textproc
MASTER_SITES=	http://www.complang.tuwien.ac.at/schani/chpp/files/ \
		http://freebsd.nsu.ru/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Non-intrusive full-featured text preprocessor

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgc.so:devel/boehm-gc

USES=		autoreconf gmake makeinfo
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--libdir=${PREFIX}/share

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

INFO=		chpp

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e \
		'/LDADD/s| gc/gc.a | -lgc | ; \
		 s|^YFLAGS|AM_YFLAGS|' ${WRKSRC}/Makefile.am

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for filename in AUTHORS NEWS README
	${INSTALL_DATA} ${WRKSRC}/${filename} ${STAGEDIR}${DOCSDIR}
.endfor

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/test && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.post.mk>
