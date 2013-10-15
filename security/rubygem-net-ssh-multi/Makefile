# Created by: Renaud Chaput <renchap@cocoa-x.com>
# $FreeBSD: security/rubygem-net-ssh-multi/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	net-ssh-multi
PORTVERSION=	1.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	renchap@cocoa-x.com
COMMENT=	SSH connection multiplexing library for Ruby

RUN_DEPENDS=	rubygem-net-ssh>=2.1.4:${PORTSDIR}/security/rubygem-net-ssh \
		rubygem-net-ssh-gateway>=0.99.0:${PORTSDIR}/security/rubygem-net-ssh-gateway

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
