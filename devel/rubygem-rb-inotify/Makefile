# New ports collection makefile for:	rubygem-rb-inotify
# Date created:		2011-10-20
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/devel/rubygem-rb-inotify/Makefile,v 1.3 2012/11/17 05:57:00 svnexp Exp $
#

PORTNAME=	rb-inotify
PORTVERSION=	0.8.8
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby wrapper for libinotify, using ffi

LIB_DEPENDS=	inotify:${PORTSDIR}/devel/libinotify
RUN_DEPENDS=	rubygem-ffi>=0.5.0:${PORTSDIR}/devel/rubygem-ffi

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
