# Created by: Jonathan Weiss (<jw@innerewut.de>)
# $FreeBSD: ports/mail/rubygem-actionmailer/Makefile,v 1.43 2013/02/16 21:49:44 svnexp Exp $

PORTNAME=	actionmailer
PORTVERSION=	3.2.12
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy email delivery and testing for Ruby

RUN_DEPENDS=	rubygem-actionpack>=${PORTVERSION}:${PORTSDIR}/www/rubygem-actionpack \
		rubygem-mail>=2.4.4:${PORTSDIR}/mail/rubygem-mail

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
