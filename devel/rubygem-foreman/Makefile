# $FreeBSD: devel/rubygem-foreman/Makefile 331026 2013-10-20 15:18:54Z swills $

PORTNAME=	foreman
PORTVERSION=	0.63.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Process manager for applications with multiple components

RUN_DEPENDS=	rubygem-dotenv>=0.7:${PORTSDIR}/misc/rubygem-dotenv \
		rubygem-thor>=0.13.6:${PORTSDIR}/devel/rubygem-thor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
