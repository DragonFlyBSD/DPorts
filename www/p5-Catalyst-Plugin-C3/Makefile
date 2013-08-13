# Created by: lbr@FreeBSD.org
# $FreeBSD: www/p5-Catalyst-Plugin-C3/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Catalyst-Plugin-C3
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst Plugin to subvert NEXT to use Class::C3

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7006:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Class-C3>=0.19:${PORTSDIR}/devel/p5-Class-C3
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Catalyst::Plugin::C3.3

.include <bsd.port.mk>
