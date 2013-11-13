# Created by: Wen Heping<wenheping@gmail.com>
# $FreeBSD: devel/rubygem-uuid/Makefile 332043 2013-10-30 02:47:06Z swills $

PORTNAME=	uuid
PORTVERSION=	2.3.7
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	UUID Generator for Ruby

RUN_DEPENDS=	rubygem-macaddr>=1.0:${PORTSDIR}/net/rubygem-macaddr

PLIST_FILES+=	bin/uuid

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
