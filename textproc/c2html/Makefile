# Created by: Andrey Zakhvatov
# $FreeBSD: textproc/c2html/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=		c2html
PORTVERSION=		0.9.6
CATEGORIES=		textproc www
MASTER_SITES=		${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/www/converters

MAINTAINER=		mkamm@gmx.net
COMMENT=	C-language sources to HTML converter

USE_AUTOTOOLS=	autoconf213

MAN1=			c2html.1

NO_STAGE=	yes
post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in AUTHORS NEWS README
	${INSTALL_MAN} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
