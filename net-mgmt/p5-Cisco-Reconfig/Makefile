# New ports collection makefile for:	p5-Cisco-Reconfig
# Date created:		2006-08-25
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net-mgmt/p5-Cisco-Reconfig/Makefile,v 1.8 2012/11/17 06:00:35 svnexp Exp $
#

PORTNAME=	Cisco-Reconfig
PORTVERSION=	0.91
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Parse and generate Cisco configuration files

RUN_DEPENDS=	p5-IO-String>=0:${PORTSDIR}/devel/p5-IO-String
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Cisco::Reconfig.3

.include <bsd.port.mk>
