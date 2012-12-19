# New ports collection makefile for:	perl2html
# Date created:				27 May 1999
# Whom:					Martin Kammerhofer
#
# $FreeBSD: ports/textproc/perl2html/Makefile,v 1.14 2012/11/17 06:02:16 svnexp Exp $
#

PORTNAME=		perl2html
PORTVERSION=		0.9.2
PORTREVISION=		1
CATEGORIES=		textproc www
MASTER_SITES=		${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/www/converters

MAINTAINER=		mkamm@gmx.net
COMMENT=	Perl sources to HTML converter

USE_AUTOTOOLS=	autoconf213

MAN1=			perl2html.1

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
.for file in AUTHORS NEWS README
	${INSTALL_MAN} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
