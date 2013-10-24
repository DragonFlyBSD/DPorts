# $FreeBSD: databases/rubygem-seed-fu/Makefile 331087 2013-10-21 03:10:52Z swills $

PORTNAME=	seed-fu
PORTVERSION=	2.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A library to maintain seed datas

RUN_DEPENDS=	rubygem-activerecord>=3.1:${PORTSDIR}/databases/rubygem-activerecord \
		rubygem-activesupport>=3.1:${PORTSDIR}/devel/rubygem-activesupport

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
