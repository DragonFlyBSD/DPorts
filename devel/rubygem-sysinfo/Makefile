# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/rubygem-sysinfo/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	sysinfo
PORTVERSION=	0.8.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	All your system-independent infoz in one handy class

RUN_DEPENDS=	rubygem-drydock>=0:${PORTSDIR}/devel/rubygem-drydock \
		rubygem-storable>=0:${PORTSDIR}/devel/rubygem-storable

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/sysinfo

NO_STAGE=	yes
.include <bsd.port.mk>
