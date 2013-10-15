# $FreeBSD: devel/rubygem-ditz/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	ditz
PORTVERSION=	0.5
PORTREVISION=	2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Simple lightweight distributed issue tracker

RUN_DEPENDS=	rubygem-trollop>=1.9:${PORTSDIR}/devel/rubygem-trollop

USE_RUBY=	yes
USE_RAKE=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/ditz

NO_STAGE=	yes
.include <bsd.port.mk>
