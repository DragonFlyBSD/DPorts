# $FreeBSD: www/p5-CatalystX-RoleApplicator/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	CatalystX-RoleApplicator
PORTVERSION=	0.005
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Apply roles to your Catalyst application-related classes

BUILD_DEPENDS=	p5-MooseX-RelatedClassRoles>=0.003:${PORTSDIR}/devel/p5-MooseX-RelatedClassRoles \
		p5-Catalyst-Runtime>=5.7:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	CatalystX::RoleApplicator.3

.include <bsd.port.mk>
