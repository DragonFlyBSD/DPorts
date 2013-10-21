# $FreeBSD: www/rubygem-carrierwave/Makefile 330958 2013-10-20 01:56:51Z swills $

PORTNAME=	carrierwave
PORTVERSION=	0.9.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Upload files, map them to a range of ORMs, store on different backends

RUN_DEPENDS=	rubygem-activesupport>=3.2.0:${PORTSDIR}/devel/rubygem-activesupport \
		rubygem-activemodel>=3.2.0:${PORTSDIR}/databases/rubygem-activemodel \
		rubygem-json>=1.7:${PORTSDIR}/devel/rubygem-json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes

.include <bsd.port.mk>
