# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: net-mgmt/p5-POE-Component-SNMP/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	POE-Component-SNMP
PORTVERSION=	1.1006
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Event-driven SNMP interface

BUILD_DEPENDS=	p5-POE>=0.31:${PORTSDIR}/devel/p5-POE \
		p5-Net-SNMP>=0:${PORTSDIR}/net-mgmt/p5-Net-SNMP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Component::SNMP.3

NO_STAGE=	yes
post-patch:
	@${TOUCH} ${WRKSRC}/config.cache

.include <bsd.port.mk>
