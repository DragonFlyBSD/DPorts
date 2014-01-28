# Created by: Ion-Mihai "IOnut" Tetcu<itetcu@people.tecnik93.com>
# $FreeBSD: devel/libbnr/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libbnr
PORTVERSION=	2.0.3
PORTREVISION=	1
CATEGORIES=	devel mail
MASTER_SITES=	http://dspam.nuclearelephant.com/sources/extras/ \
		http://T32.TecNik93.com/~itetcu/FreeBSD/ports/${PORTNAME}/sources/

MAINTAINER=	itetcu@FreeBSD.org
COMMENT=	GPL implementation of the Bayesian Noise Reduction algorithm

OPTIONS_DEFINE=	DOCS DEBUG

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS+=	--includedir=${PREFIX}/include/${PORTNAME}

DEBUG_CFLAGS=	-g -DDEBUG

PORTDOCS=	README

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/example.c ${STAGEDIR}${EXAMPLESDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
