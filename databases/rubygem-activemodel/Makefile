# $FreeBSD: databases/rubygem-activemodel/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	activemodel
PORTVERSION=	3.2.13
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A toolkit for building modeling frameworks

RUN_DEPENDS=	rubygem-activesupport>=${PORTVERSION}:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-builder>=3.0.0:${PORTSDIR}/devel/rubygem-builder

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
