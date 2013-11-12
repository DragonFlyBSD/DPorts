# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: www/p5-Catalyst-Helper-Controller-Scaffold/Makefile 332617 2013-11-03 15:16:25Z az $

PORTNAME=	Catalyst-Helper-Controller-Scaffold
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Catalyst helper for Scaffolding

BUILD_DEPENDS=	p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Catalyst-Devel>=1.00:${PORTSDIR}/www/p5-Catalyst-Devel \
		p5-Catalyst-Plugin-FormValidator>=0:${PORTSDIR}/www/p5-Catalyst-Plugin-FormValidator \
		p5-Catalyst-View-TT>=0:${PORTSDIR}/www/p5-Catalyst-View-TT \
		p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-Class-DBI-AsForm>=0:${PORTSDIR}/databases/p5-Class-DBI-AsForm \
		p5-Class-DBI-FromForm>=0:${PORTSDIR}/www/p5-Class-DBI-FromForm \
		p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class \
		p5-Template-Plugin-Class>=0:${PORTSDIR}/www/p5-Template-Plugin-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
