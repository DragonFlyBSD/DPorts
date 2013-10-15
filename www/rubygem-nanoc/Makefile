# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: www/rubygem-nanoc/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	nanoc
PORTVERSION=	3.6.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	zi@FreeBSD.org
COMMENT=	A simple but very flexible static site generator

RUN_DEPENDS=	rubygem-cri>=2.2:${PORTSDIR}/devel/rubygem-cri

USE_RUBY=	yes
USE_RUBYGEMS=	yes
USE_RAKE=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/nanoc

NO_STAGE=	yes
.include <bsd.port.mk>
