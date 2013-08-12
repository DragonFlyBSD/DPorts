# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: devel/p5-Test-Strict/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Test-Strict
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test and report on use strict/warnings coverage

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Devel-Cover>=0.43:${PORTSDIR}/devel/p5-Devel-Cover
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Test::Strict.3

.include <bsd.port.mk>
