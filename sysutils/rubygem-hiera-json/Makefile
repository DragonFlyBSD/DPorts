# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: sysutils/rubygem-hiera-json/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	hiera-json
PORTVERSION=	0.4.0
CATEGORIES=	sysutils rubygems
MASTER_SITES=	RG

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	A backend for Hiera that queries JSON data

RUN_DEPENDS=	puppet>=0:${PORTSDIR}/sysutils/puppet \
		rubygem-hiera>=1.0:${PORTSDIR}/sysutils/rubygem-hiera \
		rubygem-json>=0:${PORTSDIR}/devel/rubygem-json

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
