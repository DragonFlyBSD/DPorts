# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: www/p5-Catalyst-Model-Oryx/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Catalyst-Model-Oryx
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Oryx model component for Catalyst

BUILD_DEPENDS=	p5-Oryx>=0:${PORTSDIR}/databases/p5-Oryx \
		p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:${PORTSDIR}/www/p5-Catalyst-Devel
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
