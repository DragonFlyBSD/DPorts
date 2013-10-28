# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: security/rubygem-sshkit/Makefile 331707 2013-10-26 16:00:45Z sunpoet $

PORTNAME=	sshkit
PORTVERSION=	1.1.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Toolkit for remotely running commands on groups of servers

LICENSE=	GPLv3

RUN_DEPENDS=	rubygem-net-scp>=0:${PORTSDIR}/security/rubygem-net-scp \
		rubygem-net-ssh>=0:${PORTSDIR}/security/rubygem-net-ssh \
		rubygem-term-ansicolor>=0:${PORTSDIR}/devel/rubygem-term-ansicolor

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
