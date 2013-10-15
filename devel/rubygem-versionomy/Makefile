# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/rubygem-versionomy/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	versionomy
PORTVERSION=	0.4.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Generalized version number library for Ruby

BUILD_DEPENDS=	rubygem-blockenspiel>=0.4.5:${PORTSDIR}/devel/rubygem-blockenspiel
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
