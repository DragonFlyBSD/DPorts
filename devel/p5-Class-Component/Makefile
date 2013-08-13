# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: devel/p5-Class-Component/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-Component
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pluggable component framework

BUILD_DEPENDS=	p5-Carp-Clan>0:${PORTSDIR}/devel/p5-Carp-Clan \
		p5-Class-Accessor>0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Class-Data-Inheritable>0:${PORTSDIR}/devel/p5-Class-Data-Inheritable \
		p5-Class-Inspector>0:${PORTSDIR}/devel/p5-Class-Inspector \
		p5-UNIVERSAL-require>0:${PORTSDIR}/devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Class::Component::Component::Plaggerize.3 \
	Class::Component.3 \
	Class::Component::Plugin.3 \
	Class::Component::Component::Moosenize.3

.include <bsd.port.mk>
