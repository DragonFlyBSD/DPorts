# Created by: gugu
# $FreeBSD: devel/p5-Module-Install-Template/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Module-Install-Template
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Treat module source code as a template

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-Module-Install>=0:${PORTSDIR}/devel/p5-Module-Install
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
