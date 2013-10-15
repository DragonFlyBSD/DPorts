# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: devel/rubygem-rubyforge/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	rubyforge
PORTVERSION=	2.0.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simplistic script which automates rubyforge operations

RUN_DEPENDS=	rubygem-json_pure>=1.1.7:${PORTSDIR}/devel/rubygem-json_pure

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rubyforge

NO_STAGE=	yes
.include <bsd.port.mk>
