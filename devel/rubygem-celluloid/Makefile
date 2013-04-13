# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: devel/rubygem-celluloid/Makefile 315674 2013-04-02 13:29:49Z zi $

PORTNAME=	celluloid
PORTVERSION=	0.12.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Build concurrent programs out of concurrent objects

RUN_DEPENDS=	rubygem-timers>=1.0.0:${PORTSDIR}/devel/rubygem-timers \
    		rubygem-facter>=1.6.12:${PORTSDIR}/sysutils/rubygem-facter

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${RUBY_VER} == 1.8
BROKEN=		does not build with ruby ${RUBY_VER}
.endif

.include <bsd.port.post.mk>
