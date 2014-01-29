# Created by: Martin Kammerhofer
# $FreeBSD: textproc/perl2html/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=		perl2html
PORTVERSION=		0.9.2
PORTREVISION=		1
CATEGORIES=		textproc www
MASTER_SITES=		${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/www/converters

MAINTAINER=		mkamm@gmx.net
COMMENT=	Perl sources to HTML converter

USE_AUTOTOOLS=	autoconf213
NO_STAGE=	yes

MAN1=			perl2html.1

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
.for file in AUTHORS NEWS README
	${INSTALL_MAN} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
