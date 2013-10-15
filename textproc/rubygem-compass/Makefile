# Created by: Jason Helfman <jhelfman@experts-exchange.com>
# $FreeBSD: textproc/rubygem-compass/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	compass
PORTVERSION=	0.12.2
CATEGORIES=	textproc ruby
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Provides an open-source CSS authoring framework

RUN_DEPENDS=	rubygem-sass>=3.1:${PORTSDIR}/textproc/rubygem-sass \
		rubygem-fssm>=0.2.7:${PORTSDIR}/sysutils/rubygem-fssm \
		rubygem-chunky_png>=1.2:${PORTSDIR}/graphics/rubygem-chunky_png

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/compass

NO_STAGE=	yes
.include <bsd.port.mk>
