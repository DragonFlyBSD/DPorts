# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: mail/rubygem-mail/Makefile 315783 2013-04-11 11:30:00Z bdrewery $

PORTNAME=	mail
PORTVERSION=	2.5.3
PORTEPOCH=	1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	freebsdports@chillibear.com
COMMENT=	A Ruby email handler

LICENSE=	MIT

RUN_DEPENDS=	rubygem-treetop>=1.4.8:${PORTSDIR}/devel/rubygem-treetop \
		rubygem-mime-types>=1.16:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-i18n>=0.4.0:${PORTSDIR}/devel/rubygem-i18n

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
