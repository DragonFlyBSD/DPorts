# Created by: Sean Chittenden <seanc@FreeBSD.org>
# $FreeBSD: ports/devel/rubygem-inline/Makefile,v 1.32 2013/01/25 02:44:20 svnexp Exp $

PORTNAME=	inline
PORTVERSION=	3.12.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
DISTNAME=	RubyInline-${PORTVERSION}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Inline::C allows you to embed C/Ruby directly in ruby scripts

RUN_DEPENDS=	sow:${PORTSDIR}/devel/rubygem-hoe \
    		zentest:${PORTSDIR}/devel/rubygem-zentest

GEM_NAME=	${DISTNAME}

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
