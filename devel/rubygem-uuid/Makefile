# New ports collection makefile for:	rubygem-uuid
# Date created:		06 Nov 2008
# Whom:			Wen Heping<wenheping@gmail.com>
#
# $FreeBSD: ports/devel/rubygem-uuid/Makefile,v 1.12 2012/11/17 05:57:01 svnexp Exp $
#

PORTNAME=	uuid
PORTVERSION=	2.3.5
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
