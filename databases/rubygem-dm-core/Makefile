# New ports collection makefile for:	rubygem-dm-core
# Date created:		2010-01-20
# Whom:			Jyun-Yan You <jyyou@cs.nctu.edu.tw>
#
# $FreeBSD: databases/rubygem-dm-core/Makefile 319143 2013-05-26 23:39:05Z swills $
#

PORTNAME=	dm-core
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An Object/Relational Mapper for Ruby

RUN_DEPENDS=	rubygem-extlib>=0.9.15:${PORTSDIR}/devel/rubygem-extlib \
		rubygem-addressable==2.2.8:${PORTSDIR}/www/rubygem-addressable22

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
