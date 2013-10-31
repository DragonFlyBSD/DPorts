# $FreeBSD: databases/rubygem-activemodel/Makefile 332031 2013-10-30 02:20:20Z swills $

PORTNAME=	activemodel
PORTVERSION=	3.2.15
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A toolkit for building modeling frameworks

RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-builder>=3.0.0:${PORTSDIR}/devel/rubygem-builder

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
