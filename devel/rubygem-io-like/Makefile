# New ports collection makefile for:	rubygem-io-like
# Date created:		2011-08-06
# Whom:			TAKATSU Tomonari <tota@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-io-like/Makefile,v 1.2 2012/11/17 05:56:59 svnexp Exp $
#

PORTNAME=	io-like
PORTVERSION=	0.3.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	tota@FreeBSD.org
COMMENT=	The interface of IO objects to classes providing a few simple methods

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} == 1.9
BROKEN=	does not work with ruby 1.9
.endif

.include <bsd.port.post.mk>
