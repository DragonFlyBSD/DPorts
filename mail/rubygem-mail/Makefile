# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: mail/rubygem-mail/Makefile 323794 2013-07-27 16:06:01Z swills $

PORTNAME=	mail
PORTVERSION=	2.5.4
PORTEPOCH=	1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby email handler

LICENSE=	MIT

RUN_DEPENDS=	rubygem-treetop>=1.4.8:${PORTSDIR}/devel/rubygem-treetop \
		rubygem-mime-types>=1.16:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-i18n>=0.4.0:${PORTSDIR}/devel/rubygem-i18n

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
