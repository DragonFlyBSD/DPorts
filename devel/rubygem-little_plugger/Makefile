# Created by: Ryan Steinmetz (<rpsfa@rit.edu>)
# $FreeBSD: devel/rubygem-little_plugger/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	little_plugger
PORTVERSION=	1.1.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
DISTNAME=	little-plugger-${PORTVERSION}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Mechanism to parse ruby little-plugger files

USE_RUBY=	yes
USE_RUBYGEMS=	yes
GEM_NAME=	${DISTNAME}
RUBYGEM_AUTOPLIST=	yes

RUN_DEPENDS=	rubygem-rspec>=0:${PORTSDIR}/devel/rubygem-rspec

NO_STAGE=	yes
.include <bsd.port.mk>
