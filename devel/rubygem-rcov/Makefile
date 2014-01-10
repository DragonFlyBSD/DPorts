# Created by: Steven Kreuzer
# $FreeBSD: devel/rubygem-rcov/Makefile 338449 2014-01-02 15:36:47Z skreuzer $

PORTNAME=	rcov
PORTVERSION=	0.9.11
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Code coverage tool for Ruby

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rcov

NO_STAGE=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} == 2.0
BROKEN=		Does not work with Ruby 2.0
.endif

.include <bsd.port.post.mk>
