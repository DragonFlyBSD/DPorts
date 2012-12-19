# New ports collection makefile for:	ruby-libarchive
# Date created:		7 January 2009
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/archivers/ruby-libarchive/Makefile,v 1.4 2012/11/17 05:54:23 svnexp Exp $

PORTNAME=	libarchive
PORTVERSION=	0.1.1
CATEGORIES=	archivers ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	knu@FreeBSD.org
COMMENT=	Ruby bindings for libarchive

USE_BZIP2=	yes
USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

WRKSRC=		${WRKDIR}/ext

DOCS=		README.txt doc

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}
	cd ${WRKDIR}; ${COPYTREE_SHARE} "${DOCS}" ${RUBY_MODDOCDIR}/
.endif

.include <bsd.port.mk>
