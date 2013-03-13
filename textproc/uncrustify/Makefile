# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: textproc/uncrustify/Makefile 313389 2013-03-04 02:17:55Z amdmi3 $

PORTNAME=	uncrustify
PORTVERSION=	0.60
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Highly configurable source code beautifier

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS=	--disable-silent-rules

MAN1=		uncrustify.1

PORTDOCS=	*

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/documentation && ${COPYTREE_SHARE} '*' ${DOCSDIR}
.endif

.include <bsd.port.mk>
