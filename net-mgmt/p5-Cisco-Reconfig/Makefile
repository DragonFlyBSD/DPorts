# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net-mgmt/p5-Cisco-Reconfig/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	Cisco-Reconfig
PORTVERSION=	0.91
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Parse and generate Cisco configuration files

RUN_DEPENDS=	p5-IO-String>=0:${PORTSDIR}/devel/p5-IO-String
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Cisco::Reconfig.3

NO_STAGE=	yes
.include <bsd.port.mk>
