# Created by: Robert Gogolok <gogo@cs.uni-sb.de>
# $FreeBSD: textproc/rubygem-rak/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	rak
PORTVERSION=	1.4
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	gogolok+freebsd@gmail.com
COMMENT=	A grep replacement in pure Ruby

RUN_DEPENDS=	rubygem-hoe>=1.3.0:${PORTSDIR}/devel/rubygem-hoe

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/rak

NO_STAGE=	yes
.include <bsd.port.mk>
