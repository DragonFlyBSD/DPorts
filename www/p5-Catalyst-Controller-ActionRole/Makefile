# Created by: mons
# $FreeBSD: www/p5-Catalyst-Controller-ActionRole/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Catalyst-Controller-ActionRole
PORTVERSION=	0.15
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	mons@cpan.org
COMMENT=	Apply roles to action instances

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.71001:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Moose>=2:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Types>=0:${PORTSDIR}/devel/p5-MooseX-Types \
		p5-String-RewritePrefix>=0.004:${PORTSDIR}/textproc/p5-String-RewritePrefix \
		p5-namespace-clean>=0:${PORTSDIR}/devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Catalyst::Controller::ActionRole.3

NO_STAGE=	yes
.include <bsd.port.mk>
