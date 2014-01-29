# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: textproc/uncrustify/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	uncrustify
PORTVERSION=	0.60
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Highly configurable source code beautifier

GNU_CONFIGURE=	yes
USES=		gmake
CONFIGURE_ARGS=	--disable-silent-rules

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz
PORTDATA=	*
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install:
	cd ${WRKSRC}/documentation && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
