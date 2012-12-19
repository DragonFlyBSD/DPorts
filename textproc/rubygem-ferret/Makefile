# New ports collection makefile for:	ferret
# Date created:		2006-08-10
# Whom:			Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/textproc/rubygem-ferret/Makefile,v 1.17 2012/11/17 06:02:20 svnexp Exp $
#

PORTNAME=	ferret
PORTVERSION=	0.11.6
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ferret is a ruby port of Lucene

USE_RUBY=	yes
USE_RAKE=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=  yes
PLIST_FILES=	bin/ferret-browser

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif
.include <bsd.port.post.mk>
