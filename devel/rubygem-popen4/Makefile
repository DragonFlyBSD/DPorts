# Created by: rpsfa@rit.edu
# $FreeBSD: devel/rubygem-popen4/Makefile 332040 2013-10-30 02:40:36Z swills $

PORTNAME=	popen4
PORTVERSION=	0.1.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
DISTNAME=	${GEM_NAME}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A cross platform API for managing child processes

RUN_DEPENDS=	rubygem-open4>=0.4.0:${PORTSDIR}/devel/rubygem-open4 \
		rubygem-platform>=0.4.0:${PORTSDIR}/devel/rubygem-platform

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
GEM_NAME=	POpen4-${PORTVERSION}

.include <bsd.port.mk>
