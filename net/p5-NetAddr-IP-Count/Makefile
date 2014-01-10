# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: net/p5-NetAddr-IP-Count/Makefile 338800 2014-01-05 17:15:11Z az $

PORTNAME=	NetAddr-IP-Count
PORTVERSION=	2.01
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	NetAddr::IP::Count - Count hosts in named subnets

BUILD_DEPENDS=	p5-NetAddr-IP>0:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
