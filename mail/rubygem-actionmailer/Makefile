# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: mail/rubygem-actionmailer/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	actionmailer
PORTVERSION=	3.2.13
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby

RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:${PORTSDIR}/www/rubygem-actionpack \
		rubygem-mail>=2.4.4:${PORTSDIR}/mail/rubygem-mail

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
