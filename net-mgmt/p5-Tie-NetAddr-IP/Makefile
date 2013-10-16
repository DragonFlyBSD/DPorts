# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: net-mgmt/p5-Tie-NetAddr-IP/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	Tie-NetAddr-IP
PORTVERSION=	1.51
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Tie::NetAddr::IP - Implements a Hash where the key is a subnet

BUILD_DEPENDS=	p5-NetAddr-IP>0:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Tie::NetAddr::IP.3

NO_STAGE=	yes
.include <bsd.port.mk>
