# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: mail/rubygem-actionmailer/Makefile 335698 2013-12-05 20:27:13Z sunpoet $

PORTNAME=	actionmailer
PORTVERSION=	3.2.16
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby

LICENSE=	MIT

RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:${PORTSDIR}/www/rubygem-actionpack \
		rubygem-mail>=2.5.4:${PORTSDIR}/mail/rubygem-mail

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
