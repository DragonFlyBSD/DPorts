# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: textproc/uncrustify/Makefile 327773 2013-09-20 23:17:30Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/documentation && ${COPYTREE_SHARE} '*' ${DOCSDIR}
.endif

.include <bsd.port.mk>
